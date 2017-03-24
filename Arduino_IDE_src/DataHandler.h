#ifndef HEADER_DATAHANDLER
	#define HEADER_DATAHANDLER

  #include "Aggregator.h"
  #include "Arduino.h"
  
	class DataHandler{
    private:
      int p_tx;
      int p_rx;

      bool scaleTh = false;
      
		public:
    Aggregator *agg;

    DataHandler(SDInterface*, int, int, bool);
		
		/*	Function scaleThroughput()
		 *		Returns: Integer ([Success,0] / [Fail,1])
		 *
		 *		Parameters: none
		 *
		 *		Tracks the current throughput under/over load and 
		 *			sends cleanflight a new update rate (if ON)
		 */
		 int scaleThroughput();
		 
		 
		 /*	Function readI2C()
		 *		Returns: Integer ([Success,0] / [Fail,1])
		 *
		 *		Parameters: none
		 *
		 *		Reads I2C data from CleanFlight
		 */
		 int readI2C(String data);
     int readI2C();
		 
		 /*	Function writeI2C(string data)
		 *		Returns: Integer ([Success,0] / [Fail,1]) 
		 *
		 *		Parameters: string data
		 *
		 *		Writes I2C data back to CleanFlight (throughput scaling)
		 */
		 int writeI2C(String);

     /* Function initAndTest()
      *    Returns: Integer ([Success,0] / [Fail,1])
      *  
      *    Parameters: None
      *    
      *    Initialize and test DH Class
      */
     int initAndTest();


    
	};
#endif
