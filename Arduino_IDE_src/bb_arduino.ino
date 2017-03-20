/********************************************************************
_______________________________________________________________
  Black Box Semester Project
  Shiva Komati, Abhilash Mudigoda, Arshi Mohini, Nick Malott
  7017 Trustworthy Embedded Systems
  Spring, 2017
_______________________________________________________________

Requirements
 1. Arduino board with SPI, I2C interfaces
    -Tested with Arduino Uno R3
 2. CleanFlight board with I2C output
    -Tested with STM32 F3 Discovery
  
Wiring Requirements:
 1. SD Card
    -Ard. MOSI, pin 11
    -Ard. MISO, pin 12
    -Ard. CLK, pin 13
    -Ard. CS, pin 4
    -Ard. 5V, pin #
    -Ard. GND, pin #
    
 2. CleanFlight, Power
    -Ard. I2C TX, pin #
    -Ard. I2C RX, pin #
    -Ard. VIN, pin #
    -Ard. GND, pin #
    
Released v0.1, March 20, 2017
 Nick Malott



********************************************************************/



#include <SPI.h>
#include <SD.h>
#include "DataHandler.h"
#include "BBStorage.h"
#include "SDInterface.h"
#include "Aggregator.h"
#include "Arduino.h"



/************************************
  Configuration Parameters:
************************************/
  File myFile;
  int p_miso = 12;
  int p_mosi = 11;
  int p_clk = 13;
  int p_cs = 4;
  int p_tx = 10;
  int p_rx = 9;
  int p_test = 3;
  double c_scalar = 1.0;
  boolean test = true;    //CHANGE THIS FOR CF INTEGRATION
  DataHandler* dh;
  
/************************************
  <END CONFIG>
************************************/ 
  
  
  
/************************************
  Class Methods
************************************/ 
  int runMainLoop(){
    dh = new DataHandler();
    
	  dh->readI2C();
	  dh->scaleThroughput();  
  
    return 1;
  
  }
  
  int runTestLoop(){
	// Open serial communications and wait for port to open:
	Serial.begin(9600);
  	while (!Serial) {;}
    delay(1);
    
    Serial.println("***** Entering Test Mode: *****");

    //TODO: Test all methods, allow user input for data
    
    return 1;
  }
  
  
/************************************
  <END CLASS METHODS>
************************************/ 
  
void setup() {
 if(test)runTestLoop();
 else runMainLoop();
}

void loop() {
 
}



