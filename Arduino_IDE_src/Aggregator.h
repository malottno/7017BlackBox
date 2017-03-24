#ifndef HEADER_AGGREGATOR
	#define HEADER_AGGREGATOR

  #include "Arduino.h"
  #include "BBStorage.h"
   
	class Aggregator{
		private:
      String currentDataSet;
		
		public:
      Aggregator(SDInterface*);
      
      BBStorage* mStore;

      
      /*  Function AddToAggregator(String data)
       *    Returns: Integer ([Success,0] / [Fail,1])
       *
       *    Parameters: String
       *
       *    Add the current data string to the aggregator
       */
		  int addToAggregator(String);

      /*  Function forcePushAggregator()
       *    Returns: Integer ([Success,0] / [Fail,1])
       *
       *    Parameters: none
       *
       *    Force a push of the aggregator to write to the SD card
       */
		  int forcePushAggregator();	

      /* Function initAndTest()
       *    Returns: Integer ([Success,0] / [Fail,1])
       *  
       *    Parameters: None
       *    
       *    Initialize and test Aggregator Class
       */
      int initAndTest();
	};

  
#endif
