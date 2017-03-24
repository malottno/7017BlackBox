#ifndef HEADER_BBSTORAGE
	#define HEADER_BBSTORAGE
  
  #include "SDInterface.h"
  #include "Arduino.h"
    
	class BBStorage{
    private:
      String fileName = "";
      SDInterface* mySD;

  
    public:
        
      BBStorage(SDInterface*);

    
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
  		 *		Returns: Integer ([Success,0] / [Fail,1])
  		 *
  		 *		Parameters: string fileName
  		 *
  		 *		Writes data header to fileName
  		 */
  		 int writeHeader(String);
  		 
  		 
  		 /*	Function splitFile()
  		 *		Returns: Integer ([Success,0] / [Fail,1])
  		 *
  		 *		Parameters: none
  		 *
  		 *		Splits the current log file to a new file for writing to
  		 */
  		 int splitFile();

       /* Function initAndTest()
       *    Returns: Integer ([Success,0] / [Fail,1])
       *  
       *    Parameters: None
       *    
       *    Initialize and test BBStorage Class
       */
       int initAndTest();
	};
	
#endif
