#pragma once

#include <arduino.h>
 
class GenericButton
 { public:
      GenericButton (uint8_t id) { pin = id; }
      bool operator()() { return digitalRead(pin); }
 
   private:
      uint8_t pin;
 };
 
class GenericLED
 { public:
      GenericLED (uint8_t id) { pin = id; pinMode(pin,OUTPUT); }
      bool operator()() { return digitalRead(pin); }
      void on() { digitalWrite(pin,HIGH); }
      void off() { digitalWrite(pin,LOW); }
      void set(bool s) { digitalWrite(pin, s ? HIGH : LOW); }
      void dim(int v) { analogWrite(pin, v); }
      void toggle() { digitalWrite(pin,digitalRead(pin)? LOW:HIGH); }

   private:
      uint8_t pin;
 };

class GenericBuzzer
 { public:
      GenericBuzzer (uint8_t id) { pin = id; pinMode(pin,OUTPUT); }
      void on() { digitalWrite(pin,HIGH); }
      void off() { digitalWrite(pin,LOW); }
      void set(bool s) { digitalWrite(pin, s ? HIGH : LOW); }
   
   private:
      uint8_t pin;
 };

class GenericRotaryAngleSensor
 { public:
      GenericRotaryAngleSensor(uint8_t id, float angle) { pin = id; pinMode(pin,INPUT); Full_angle = angle; }
      bool operator()(float trigger) { return readAngle() >= trigger; }
      float readAngle()  { float vout = (float) adcval() / 1024 * Full_angle; return vout;}
      int readRaw() { return adcval(); }

   private:
      int adcval() { return analogRead(pin); }
         
   private:
      uint8_t pin;
      float Full_angle;
 }; 

class GenericSwitch
 { public:
      GenericSwitch (uint8_t id) { pin = id; }
      bool operator()() { return digitalRead(pin); }
 
   private:
      uint8_t pin;
 };

class GenericInputVoltage
 { public:
      GenericInputVoltage (uint8_t id) { pin = id; pinMode(pin, INPUT); }
      bool operator()(float trigger) { return readVoltage() >= trigger; }
      int readAdc()  { return readValue(1); }
      float readAverageVoltage(uint8_t navr)  { return readValue(navr)*5.0/1024.0; }
      float readVoltage() { return readValue(1)*5.0/1024.0; }
        
   private:
      int readValue(uint8_t num_average) { an=0; for (idx=0; idx<num_average; idx++) an = an + analogRead(pin); return an/num_average; } 
  
   private:
      uint8_t pin;
      long an;
      int idx;
 }; 

class GenericPiezo
 { public:
      GenericPiezo (uint8_t id) : driveState(false), isEnabled(false) { pin = id; pinMode(pin, OUTPUT); }
      void drive()  
       { if (driveState)
            driveState = LOW;
         else
            driveState = HIGH;
         
         if (isEnabled)
            digitalWrite(pin, driveState);   
       }
      void enable()  { isEnabled = true; }
      void disable() { isEnabled = false; digitalWrite(pin, LOW); }
  
   private:
      uint8_t pin;
      bool driveState;
      bool isEnabled;
 }; 

class GenericHallEffectSensor
 { public:
      GenericHallEffectSensor (uint8_t id) { pin = id; }
      bool operator()(float trigger) { return readAcCurrent(100) >= trigger; }

      float readAcCurrent(uint16_t navg)
       { acc = 0;
         for (i=0; i<navg; i++)
          { adc = analogRead(pin)-512;
            acc += (adc*adc);
            delay(1); 
          }
         return sqrt(acc/navg)*0.0264;
       }
      
      float readDcCurrent(uint16_t navg)        
       { average = 0;
         for (i = 0; i<navg; i++) 
          { average = average + (0.0264 * analogRead(pin) - 13.513) / navg;
            delay(1);
          }
         return average;
       }
 
   private:
      uint8_t pin;
      long acc, adc;
      float average;
      uint16_t i;
 }; 
