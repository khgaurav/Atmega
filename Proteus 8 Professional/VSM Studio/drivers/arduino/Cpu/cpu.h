#include <arduino.h>
#include <core.h>

typedef void (*ISR)();

class CPU
 { public:
      // Thunks to Arduino layer:
 	   static void pinMode(uint8_t pin, uint8_t mode) { ::pinMode(pin, mode); }
 	   static void digitalWrite(uint8_t pin, bool state) { ::digitalWrite(pin, state ? HIGH : LOW); }
 	   static bool digitalRead(uint8_t pin) { return ::digitalRead(pin) == HIGH; } 	      
 	   static long pulseIn(uint8_t pin, uint8_t type, long timeout) { return ::pulseIn(pin, type, timeout); }
 	   static long millis() { return ::millis(); }
 	   static void analogWrite(uint8_t pin, int value) { ::analogWrite(pin, value); }
 	   static int  analogRead(uint8_t pin) { return ::analogRead(pin); }
 	   static void analogReference(uint8_t mode) { ::analogReference(mode); }  	   	
 	   // Interrupt hooks
 	   static void enableInterrupt(uint8_t i, uint8_t mode) { ::attachInterrupt(i, isrs[i], mode); }
 	   static void disableInterrupt(uint8_t i) { ::detachInterrupt(i); }
 	   static void attachResetHandler(ISR isr) { isr(); }
 	   template<int n> static void attachInterruptHandler(ISR isr) { isrs[n] = isr; }

 	   // Debug output
 	   static PrintList &debug() { return output.begin(true, &Serial); }      
 
	 private:
	   static ISR isrs[6]; // Up to 6 on the Mega
	   static PrintList output;
 	   
 };
 
 extern CPU Cpu;
 