// 
// Blink 
//
// Blinks
// Developed with [embedXcode](http://embedXcode.weebly.com)
// 
// Author	 	Alsey Coleman Miller
// 				ColemanCDA
//
// Date			5/16/14 1:17 PM
// Version		1.0
// 
// Copyright	© Alsey Coleman Miller, 2014
// License		CC
//
// See			ReadMe.txt for references
//

// Core library for code-sense
#if defined(WIRING) // Wiring specific
#include "Wiring.h"
#elif defined(MAPLE_IDE) // Maple specific
#include "WProgram.h"   
#elif defined(MICRODUINO) // Microduino specific
#include "Arduino.h"
#elif defined(MPIDE) // chipKIT specific
#include "WProgram.h"
#elif defined(DIGISPARK) // Digispark specific
#include "Arduino.h"
#elif defined(ENERGIA) // LaunchPad MSP430, Stellaris and Tiva, Experimeter Board FR5739 specific
#include "Energia.h"
#elif defined(TEENSYDUINO) // Teensy specific
#include "Arduino.h"
#elif defined(ARDUINO) // Arduino 1.0 and 1.5 specific
#include "Arduino.h"
#else // error
#error Platform not defined
#endif

// Include application, user and local libraries


// Define variables and constants
//
// Brief	Name of the LED
// Details	Each board has a LED but connected to a different pin
//
const int redLedPin = 12;

const int greenLedPin = 11;

//
// Brief	Setup
// Details	Define the pin the LED is connected to
//
// Add setup code 
void setup() {

    pinMode(redLedPin, OUTPUT);
    
    pinMode(greenLedPin, OUTPUT);
}

//
// Brief	Loop
// Details	Blink the LED
//
// Add loop code 
void loop() {
    
    digitalWrite(greenLedPin, LOW);
    
    digitalWrite(redLedPin, HIGH);
    
    delay(2000);
    
    digitalWrite(redLedPin, LOW);
    
    digitalWrite(greenLedPin, HIGH);
    
    delay(5000);
    
}


