#include "DataHandler.h"


DataHandler::DataHandler(SDInterface* mSD, int p_tx, int p_rx, bool scale){
  this->agg = new Aggregator(mSD);
  this->p_tx = p_tx;
  this->p_rx = p_rx;
  this->scaleTh = scale;
  return;    
}


/*	Function scaleThroughput()
 *		Returns: VOID 
 *
 *		Parameters: none
 *
 *		Tracks the current throughput under/over load and 
 *			sends cleanflight a new update rate (if ON)
 */
int DataHandler::scaleThroughput(){
	if(this->scaleTh){
			return 0;
	}		
	return 0;
}


/*	Function OVERLOADED readI2C()
 *		Returns: string 
 *
 *		Parameters: none
 *
 *		Reads I2C data from CleanFlight
 */
int DataHandler::readI2C(){
	String retData = "";

}


/*	Function OVERLOADED readI2C()
 *		Returns: string 
 *
 *		Parameters: string data
 *
 *		Reads I2C data from CleanFlight
 */
int DataHandler::readI2C(String data){
 String retData = "";
	if(data != ""){
		return agg->addToAggregator(data);
	}

 return 0;
}


/*	Function writeI2C(string data)
 *		Returns: VOID 
 *
 *		Parameters: string data
 *
 *		Writes I2C data back to CleanFlight (throughput scaling)
 */
int DataHandler::writeI2C(String data){
	return 0;
}

/* Function initAndTest()
 *    Returns: Integer ([Success,0] / [Fail,1])
 *  
 *    Parameters: None
 *    
 *    Initialize and test Aggregator Class
 */
int DataHandler::initAndTest(){
  if(!this->writeI2C("testData"))
    if(!this->readI2C("TestData2"))
      if(!this->scaleThroughput())
        return 0;
  return 1;
}


