// Utility Classes used by other modules.

#ifndef __CORE_H__
#define __CORE_H__

#include <arduino.h>
#include <print.h>
#include <stream.h>
#include <stdlib.h>
#include <math.h>

extern const char __ATTR_PROGMEM__ H_RESOURCE[]; 
extern const char __ATTR_PROGMEM__ H_FILE[]; 

struct Handle
 { PGM_P type;
    union 
     { const char *resource;
       class File *file;
       void *ptr;
     };
 };

class PrintBuffer : public Print, public Printable
 { public:
      PrintBuffer();
      void clear() { s = (char *)NULL; }
      size_t length() { return s.length(); }
      String &buffer() { return s; }
      virtual size_t write(uint8_t c);
      virtual size_t write(const uint8_t *buffer, size_t size);
      virtual size_t printTo(Print &buffer) const;      
      
   private:
      String s;
 };      

class PrintList 
 { public:
      PrintList ();
      void setDelimiter(char d) { delimiter = d; }
      void setTerminator(char t) { terminator = t; }
      void setPlaces (int p) { places = p; }
      void setBase(int b) { base = b; }
      virtual PrintList &begin(bool eol, Print *p);
      virtual PrintList &arg(int i);
      virtual PrintList &arg(long i);
      virtual PrintList &arg(double f);
      virtual PrintList &arg(const char *s);
      virtual PrintList &arg(const String &s);
      virtual PrintList &arg(const __FlashStringHelper *s);
      virtual void end();
    
   protected:      
      virtual void nextItem();
      virtual void toEscaped(const String &s);
      
   protected:
      Print *target;
      bool newLine;
      uint8_t argCount;
      char delimiter;
      char terminator;
      int places;
      int base;      
 };

class StreamList 
 { public:
      StreamList ();
      void setDelimiter(char d) { delimiter = d; }

      virtual StreamList &begin(Stream *s);
      virtual StreamList &arg(long &i); 
      virtual StreamList &arg(float &f);
      virtual StreamList &arg(String &s);
      virtual void end() { }
      
   private:      
      virtual void skipSpaces();
      virtual void skipDelimiter();
      virtual bool isSpace(char c);
      virtual String fromEscaped();
      
   private:
      Stream *source;
      char delimiter;
 };
 
// Conversion functions:
inline long toInt(const String &s) { return atoi(s.c_str()); }
inline float toFloat(const String &s) { return atof(s.c_str()); }
extern String toString(long l);
extern String toString(float f);

// String library:
inline unsigned len(const String &s) { return s.length(); }
inline String left(const String &s, unsigned count) { return s.substring(0, count); }
inline String right(const String &s, unsigned count) { return s.substring(s.length()-count, s.length()-1); }
inline String sub(const String &s, unsigned from, unsigned to) { return s.substring(from, to); }
inline String upper(String s)    { s.toUpperCase(); return s; }
inline String lower(String s) { s.toLowerCase(); return s; }

 
#endif