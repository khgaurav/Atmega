#include "realtimeclock.h"

RealTimeClock::RealTimeClock(uint8_t pin)
 { soutPin = pin;
   running = false;
 }


void RealTimeClock::begin(void)
 { 
   Wire.begin();
   rtc.begin();
   rtc.writeSqwPinMode(SquareWave1HZ);
   if (!rtc.isrunning()) 
    { // Following line sets the rtc to the date & time this sketch was compiled
      rtc.adjust(DateTime(__DATE__, __TIME__));
    }
 }

String RealTimeClock::readTime(void)
 { DateTime now = rtc.now();  
   String hh, mm, ss;
  
   if (now.hour()<10)
      hh = '0'+String(now.hour(),DEC);    
   else 
      hh = String(now.hour(),DEC);
  
   if (now.minute()<10) 
      mm = '0'+String(now.minute(),DEC); 
   else
      mm = String(now.minute(),DEC); 
   
   if (now.second()<10)
      ss = '0'+String(now.second(),DEC); 
   else
      ss = String(now.second(),DEC); 
 
   String tt = hh+":"+mm+":"+ss;
   return tt;
 }
 
String RealTimeClock::readDate(void)
 { DateTime now = rtc.now();  
   String DD, MM, YY;
     
   if (now.day()<10)
      DD = '0'+String(now.day(), DEC);
   else
      DD = String(now.day(),DEC); 
     
   if (now.month()<10)
      MM = '0'+String(now.month(),DEC);
   else
      MM= String(now.month(),DEC); 
     
   YY = String(now.year(),DEC); 
     
   String tt = DD+"-"+MM+"-"+YY; 
   return tt;
 }
 
void RealTimeClock::squareWave(uint8_t sqw)
 { 
   rtc.writeSqwPinMode((Ds1307SqwPinMode) sqw);
 }
 
 
void RealTimeClock::adjustTime(uint8_t hh, uint8_t mm, uint8_t ss)
 { 
   if (hh<0)  hh = 0;
   if (hh>23) hh = 23;
   if (mm<0)  mm = 0;
   if (mm>59) mm = 59;
   if (ss<0)  ss = 0;
   if (ss>59) ss = 59;
    
   DateTime now = rtc.now();
   DateTime time(now.year(),now.month(),now.day(),hh,mm,ss); 
   rtc.adjust(time);
 }
 
void RealTimeClock::adjustDate(uint8_t year, uint8_t month, uint8_t day)
 { DateTime now = rtc.now();
   DateTime date(year,month,day,now.hour(),now.minute(),now.second()); 
   rtc.adjust(date);
 } 
 
void RealTimeClock::writeNvram(uint8_t addr, uint8_t data)
 { rtc.writenvram(addr, data);
 }

uint8_t RealTimeClock::readNvram(uint8_t addr)
 { return (rtc.readnvram(addr));
 }

uint16_t RealTimeClock::now(uint8_t parameter)
 { uint16_t value;
   DateTime now = rtc.now();
   switch (parameter)
    { case 0: value = now.year();   break;
      case 1: value = now.month();  break;
      case 2: value = now.day();    break;
      case 3: value = now.hour();   break;
      case 4: value = now.minute(); break;
      case 5: value = now.second(); break;
    }
   return value;
 }                 