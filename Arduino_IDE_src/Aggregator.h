#ifndef HEADER_AGGREGATOR
	#define HEADER_AGGREGATOR

  #include "Arduino.h"
  #include "BBStorage.h"
   
	class Aggregator{
		public:
      Aggregator();
		 String currentDataSet;
     BBStorage* myStore;
		 void addToAggregator(String data);
		 void forcePushAggregator();	
	};
#endif
