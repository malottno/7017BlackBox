#ifndef HEADER_SDINTERFACE
	#define HEADER_SDINTERFACE

  #include <SD.h>
  #include "Arduino.h"

	class SDInterface{
		public:
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
		*		Parameters: None
		*/
		 int initAndTest();
		
		
		 /*	Function readFromSD(char[],char[])
		*		Returns: Integer ([Success,0] / [Fail,1])
		*
		*		Parameters: string fileToRead - File Path to read from
		*/
		 String readFromSD(String);
	};
	
#endif
