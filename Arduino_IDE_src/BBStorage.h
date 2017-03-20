#ifndef HEADER_BBSTORAGE
	#define HEADER_BBSTORAGE
  
  #include "SDInterface.h"
  #include "Arduino.h"
    
	class BBStorage{
  
    public:
    
      String fileName = "";
      SDInterface* mySD;
      BBStorage();
      
  		/*	Function testAndReplace(string data)
  		 *		Returns: Integer ([Success,0] / [Fail,1])
  		 *
  		 *		Parameters: string data
  		 *
  		 *		Reads current file to temp string; writes new file
  		 *			Then, compare the two file contents to make sure
  		 *			the write was successful.
  		 */
  		 int testAndReplace(String);
  		 
  		 
  		 /*	Function writeHeader(string fileName)
  		 *		Returns: VOID 
  		 *
  		 *		Parameters: string fileName
  		 *
  		 *		Writes data header to fileName
  		 */
  		 void writeHeader(String);
  		 
  		 
  		 /*	Function splitFile()
  		 *		Returns: VOID 
  		 *
  		 *		Parameters: none
  		 *
  		 *		Splits the current log file to a new file for writing to
  		 */
  		 void splitFile();
	};
	
#endif
