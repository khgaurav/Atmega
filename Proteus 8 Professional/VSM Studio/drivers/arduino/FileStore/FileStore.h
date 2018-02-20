// Wrapper for the SD/FAT file storage library

#ifndef __FILESTORE_H__
#define __FILESTORE_H__

#pragma once

#include <core.h>
#include <sd.h>

class FileStore
 { public:
      bool begin(uint8_t cs);
      void uploader(uint8_t cs);
      bool operator()(const char *filename);
      Handle open(Handle &h);
      Handle open(const char *filename, uint8_t mode);
      void close(Handle &h);
      void remove(const char *filename);
      void mkdir(const char *dirname);
      void rmdir(const char *dirname);
      void flush(Handle &h);
      StreamList &read(Handle &h);
      String readln(Handle &h);
      PrintList &write(Handle &h);
      PrintList &writeln(Handle &h);
      PrintList &print(Handle &h);
      PrintList &println(Handle &h);
      void setDelimiter(char d) { readList.setDelimiter(d); writeList.setDelimiter(d); }
      void setPlaces (int p) { printList.setPlaces(p); }
      void setBase(int b) { printList.setBase(b); }
   private:
      void calcCRC(byte &crc, byte value);
      void writeLong(unsigned long value);
   private:
      StreamList readList;
      PrintList writeList, printList;
      bool delimiter;
 };       

extern FileStore FS;

#endif