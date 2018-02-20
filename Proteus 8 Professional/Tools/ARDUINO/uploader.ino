/********************************************************************/
/********************************************************************/
/*****                                                          *****/
/*****        L A B C E N T E R    E L E C T R O N I C S        *****/
/*****                                                          *****/
/*****                 Arduino Resource Uploader                *****/
/*****                                                          *****/
/********************************************************************/
/********************************************************************/

typedef unsigned long dword;

#include <core.h>
#include <spi.h>
#include <sd.h>
 
#ifndef CS
#define CS 10
#endif

#define UPLOADER_SPEED 115200
#define UPLOADER_NAME_SIZE 14
#define UPLOADER_BLOCK_SIZE 32 
#define UPLOADER_MAX_TIMEOUT 1000

void sendByte(byte value)
 { Serial.write(value);
 }
 
bool receiveByte(byte *data)
 { dword timeout = 0;
   while (timeout < UPLOADER_MAX_TIMEOUT)
    { if (Serial.available())
       { *data = Serial.read();
         return true;
       }
      else
       { delay(1);
         timeout++;
       }
    }
   return false;
 }
 
void sendDword(dword value)
 { sendByte((value & 0x000000FF));
   sendByte((value & 0x0000FF00) >> 8);
   sendByte((value & 0x00FF0000) >> 16);
   sendByte((value & 0xFF000000) >> 24);
 }

bool receiveDword(dword &data)
 { data = 0;
   for (int i=0; i<4; i++)
    { byte value;
      if (!receiveByte(&value))
         return false;
      data += ((dword)value) << (i * 8);
    }
   return true;
 }
 
bool receiveFileName(char *name, dword size)
 { for (dword i=0; i<size; i++)
    { if (!receiveByte((byte *)&name[i]))
         return false;
      if (name[i] == '\0')
         return true;
    }
   return false;
 }
 
void calcCRC(byte &crc, byte value)
 { for (byte j = 8; j>0; j--)
    { byte sum = (crc ^ value) & 0x01;
      crc >>= 1;
      if (sum)
         crc ^= 0x8C;
      value >>= 1;
    }
 }

bool receiveFile()
// Receive single file
 { char name[UPLOADER_NAME_SIZE];
   // Request file name
   sendByte('N');
   File f;
   if (!receiveFileName(name, UPLOADER_NAME_SIZE))
    { // Failed to receive file name
      sendByte('F');
      return false;
    }
   SD.remove(name);
   f = SD.open(name, FILE_WRITE);
   if (!f)
    { // Failed to open file
      sendByte('F');
      return false;
    }
   // Request file size
   sendByte('S');
   dword size;
   if (!receiveDword(size))
      return false;
   // Receive file contents
   while (true)
    { byte crc=0;
      dword blockSize = min(UPLOADER_BLOCK_SIZE, size);
      sendDword(blockSize);
      if (blockSize == 0)
       { // All bytes received, transmission finished
         f.close();
         return true;
       }
      // Receive data
      byte value;
      for (dword i=0; i<blockSize; i++)
       { if (!receiveByte(&value))
            break;
         f.write(value);
         calcCRC(crc, value);
       }
      // Request CRC
      sendByte('C');
      if (!receiveByte(&value))
         break;
      if (crc != value)
       { // CRC check failed
         sendDword(0);
         break;
       }
      // Advance
      size -= blockSize;
    }
   // Something happened
   f.close();
   return false;
 }
 
bool sendFile()
 { char name[UPLOADER_NAME_SIZE];
   // Request file name
   sendByte('N');
   File f;
   if (!receiveFileName(name, UPLOADER_NAME_SIZE))
    { // Failed to receive file name
      sendByte('F');
      return false;
    }
   f = SD.open(name, FILE_READ);
   if (!f)
    { // Failed to open file
      sendDword(0);
      return false;
    }
   dword size = f.size();
   sendDword(size);
   
   dword blockSize;
   while (receiveDword(blockSize))
    { if (blockSize == 0)
       { // Finished
         f.close();
         return true;
       }
      size -= blockSize;
      byte crc = 0;
      byte value;
      for (dword i=0; i<blockSize; i++)
       { value = f.read();
         sendByte(value);
         calcCRC(crc, value);
       }
      if (!receiveByte(&value) || value != 'C')
         break;
      sendByte(crc);
    }
   // Something happened
   f.close();
   return false;
 }

void writeEmptyFileInfo()
 { // 5 zeros, i.e. all file info is empty
   for (int i=0; i<5; i++)
      sendByte(0);
 }
 
bool writeFileInfo(File &dir)
 { if (!dir)
    { writeEmptyFileInfo();
      return false;
    }
   File entry = dir.openNextFile();
   if (!entry)
    { writeEmptyFileInfo();
      return false;
    }
   // File size
   sendDword(entry.size());
   // File name
   char *name = entry.name();
   for (int i=0; name[i] != '\0'; i++)
      sendByte(name[i]);
   sendByte(0);
   entry.close();
   return true;
 }
 
bool listDirectory()
 { char name[UPLOADER_NAME_SIZE];
   // Request file name
   sendByte('N');
   File f;
   if (!receiveFileName(name, UPLOADER_NAME_SIZE))
    { // Failed to receive file name
      sendByte('F');
      return false;
    }
   f = SD.open(name);
   while (writeFileInfo(f))
    { byte value;
      if (!receiveByte(&value))
       { f.close();
         return false;
       }
      if (value == 0)
       { // Request to finish
         break;
       }
    }
   f.close();
   return true;
 }

bool handshake()
 { byte value;
   if (!receiveByte(&value) || value != 'R')
      return false;
   sendByte('X');
   if (!receiveByte(&value) || value != 'r')
      return false;
   sendByte('x');
   return true;
 }

bool initializeCard(const uint8_t cs)
 { if (SD.begin(cs))
    { sendByte('K');
      return true;
    }
   sendByte('F');
   return false;
 }
 
void uploader(const uint8_t cs)
 { bool initialized = false;
   while (true)
    { if (!initialized)
         handshake();
      byte value;
      if (receiveByte(&value))
       { switch (value)
          { case 'I':
               if (!initialized)
                  initialized = initializeCard(cs);
               break;
            case 'U':
               if (initialized)
                  receiveFile();
               break;
            case 'D':
               if (initialized)
                  sendFile();
               break;
            case 'L':
               if (initialized)
                  listDirectory();
               break;
            case 'E':
               // Exit uploader
               return;
          }
       }
      else
         initialized = false;
    }
 }
 
void setup()
 { Serial.begin(UPLOADER_SPEED);
   uploader(CS);
   Serial.end();
 }

void loop()
 { 
 }
