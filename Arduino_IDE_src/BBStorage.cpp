#include "BBStorage.h"


BBStorage::BBStorage(){
  mySD = new SDInterface();
  return;
}

/*	Function testAndReplace(char[] data)
 *		Returns: Integer ([Success,0] / [Fail,1])
 *
 *		Parameters: char[] data
 *
 *		Reads current file to temp string; writes new file
 *			Then, compare the two file contents to make sure
 *			the write was successful.
 */
int BBStorage::testAndReplace(String data){
	//Read Current Data
	String testString = mySD->readFromSD(fileName);
	
	//Create a temporary file in storage
	mySD->writeToSD(fileName + "_t", testString + data);
	
	//Compare to the original file
	String newString = mySD->readFromSD(fileName + "_t");
	
	if(testString + data == newString){
		mySD->writeToSD(fileName, newString);
		return 0;
	}	
	return 1;
}

/*	Function writeHeader(char[] fileName)
 *		Returns: VOID 
 *
 *		Parameters: char[] fileName
 *
 *		Writes data header to fileName
 */
void BBStorage::writeHeader(String fileName){
	String header = "TestParam1,TestParam2,TestParam3,TestParam4,TestParam5\n";
	mySD->writeToSD(fileName, header);
	return;
}

/*	Function splitFile()
 *		Returns: VOID 
 *
 *		Parameters: none
 *
 *		Splits the current log file to a new file for writing to
 */
void BBStorage::splitFile(){
	String fileName = fileName + "_1";

	writeHeader(fileName);

	return;
}

