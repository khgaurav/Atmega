#pragma once

#include <arduino.h>
#include <wire.h>
#include "RTClib.h"

class RealTimeClock
 { public:
      RealTimeClock (uint8_t);
      
      void begin(void);
      String readTime(void);
      String readDate(void);
      void squareWave(uint8_t); 
      void adjustTime(uint8_t, uint8_t, uint8_t);
      void adjustDate(uint8_t, uint8_t, uint8_t);
      void writeNvram(uint8_t, uint8_t);
      uint8_t readNvram(uint8_t);
      uint16_t now(uint8_t);
      
   private:
      uint8_t soutPin;
      RTC_DS1307 rtc;
      DateTime dt;
      bool running;
 };
