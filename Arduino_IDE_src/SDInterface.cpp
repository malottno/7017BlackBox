#include "SDInterface.h"


/*	Function initAndTest()
 *		Returns: Integer ([Success,0] / [Fail,1])
 *
 *		Parameters: None
 */
int SDInterface::initAndTest(){
  Serial.print("Initializing SD card...");
  if (!SD.begin(4)) {
	Serial.println("initialization failed!");
	return 0;
  }
  else return 1;
  
}

/*	Function writeToSD(string,string)
 *		Returns: Integer ([Success,0] / [Fail,1])
 *
 *		Parameters: string fileToWrite - File Path to write to
 *					string textToWrite - String to write to file
 */
int SDInterface::writeToSD(String fileToWrite, String textToWrite){
  File myFile = SD.open(fileToWrite, FILE_WRITE);
  
  if (myFile) {
	myFile.println(textToWrite);
	myFile.close();
	Serial.println("done.");
  } else {
	Serial.println("error opening " + fileToWrite);
  }	
  return 0;
}

/*	Function readFromSD(string,string)
 *		Returns: Integer ([Success,0] / [Fail,1])
 *
 *		Parameters: string fileToRead - File Path to read from
 */
String SDInterface::readFromSD(String fileToRead){
	File myFile = SD.open(fileToRead);
	
	if (myFile) {
	// read from the file until there's nothing else in it:
		while (myFile.available()) {
			Serial.write(myFile.read());
		}

	myFile.close();

	} else {
		Serial.println("error opening " + fileToRead);
	}
	return "test";
}

