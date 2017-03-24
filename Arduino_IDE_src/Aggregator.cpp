#include "Aggregator.h"


Aggregator::Aggregator(SDInterface* mSD){
  this->mStore = new BBStorage(mSD);
  return;
}


/*  Function AddToAggregator(String data)
 *    Returns: Integer ([Success,0] / [Fail,1])
 *
 *    Parameters: String
 *
 *    Add the current data string to the aggregator
 */
int Aggregator::addToAggregator(String data){
	this->currentDataSet = this->currentDataSet + data + "\n";
	
	return 0;
}


/*  Function forcePushAggregator()
 *    Returns: Integer ([Success,0] / [Fail,1])
 *
 *    Parameters: none
 *
 *    Force a push of the aggregator to write to the SD card
 */
int Aggregator::forcePushAggregator(){
  
	return this->mStore->testAndReplace(this->currentDataSet);
}


/* Function initAndTest()
 *    Returns: Integer ([Success,0] / [Fail,1])
 *  
 *    Parameters: None
 *    
 *    Initialize and test Aggregator Class
 */
int Aggregator::initAndTest(){
  if(!this->addToAggregator("AggTestData"))
    if(!this->forcePushAggregator())
      return 0;
  return 1;
}

