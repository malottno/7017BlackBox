#include "SDInterface.h"



SDInterface::SDInterface(int p_miso, int p_mosi, int p_clk, int p_cs){
  this->p_miso = p_miso;
  this->p_mosi = p_mosi;
  this->p_clk = p_clk;
  this->p_cs = p_cs;
  return;
}



/*	Function initAndTest()
 *		Returns: Integer ([Success,0] / [Fail,1])
 *
 *		Parameters: String testString
 */
int SDInterface::initAndTest(String testString){
  Serial.print("Initializing SD card...");
  
  if (!SD.begin(4)) {
  	Serial.println("initialization failed! (Check pins)");
  	return 1;
  }
  else {
    Serial.print("\tSD Initialized!");

    if(!writeToSD("testFile",testString))
      if(!readFromSD("testFile"))
        return 0;
    return 1;
  }
  
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

