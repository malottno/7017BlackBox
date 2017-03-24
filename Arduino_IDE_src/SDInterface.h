#ifndef HEADER_SDINTERFACE
	#define HEADER_SDINTERFACE

  #include <SD.h>
  #include "Arduino.h"

  

	class SDInterface{
		public:
      int p_miso;
      int p_mosi;
      int p_clk;
      int p_cs;


      SDInterface(int, int, int, int);

   
		 /*	Function writeToSD(char[],char[])
		*		Returns: Integer ([Success,0] / [Fail,1])
		*
		*		Parameters: string fileToWrite - File Path to write to
		*					string textToWrite - String to write to file
		*/
		 int writeToSD(String, String);
		
		
		 /*	Function initAndTest()
		*		Returns: Integer ([Success,0] / [Fail,1])
		*
		*		Parameters: String testString
    *   
    *     Test Connect To SD
    *     Test Read From SD  
    *     Test Write From SD
    *     Test T&R with SD
    *   
		*/
		 int initAndTest(String);
		
		
		 /*	Function readFromSD(char[],char[])
		*		Returns: Integer ([Success,0] / [Fail,1])
		*
		*		Parameters: string fileToRead - File Path to read from
		*/
		 String readFromSD(String);
	};
	
#endif
