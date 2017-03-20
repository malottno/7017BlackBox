#ifndef HEADER_DATAHANDLER
	#define HEADER_DATAHANDLER

  #include "Aggregator.h"
  #include "Arduino.h"
  
	class DataHandler{
		public:


    bool scaleTh = false;
    bool test = true;
    Aggregator *agg;

    DataHandler();
		
		/*	Function scaleThroughput()
		 *		Returns: VOID 
		 *
		 *		Parameters: none
		 *
		 *		Tracks the current throughput under/over load and 
		 *			sends cleanflight a new update rate (if ON)
		 */
		 void scaleThroughput();
		 
		 
		 /*	Function readI2C()
		 *		Returns: string 
		 *
		 *		Parameters: none
		 *
		 *		Reads I2C data from CleanFlight
		 */
		 String readI2C(String data);
     String readI2C();
		 
		 /*	Function writeI2C(string data)
		 *		Returns: VOID 
		 *
		 *		Parameters: string data
		 *
		 *		Writes I2C data back to CleanFlight (throughput scaling)
		 */
		 void writeI2C(String);
	};
#endif
