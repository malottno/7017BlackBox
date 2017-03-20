#include "DataHandler.h"


DataHandler::DataHandler(){
  agg = new Aggregator();
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
void DataHandler::scaleThroughput(){
	if(this->scaleTh){
			return;
	}		
	return;
}


/*	Function OVERLOADED readI2C()
 *		Returns: string 
 *
 *		Parameters: none
 *
 *		Reads I2C data from CleanFlight
 */
String DataHandler::readI2C(){
	String retData = "";

	return retData;
}


/*	Function OVERLOADED readI2C()
 *		Returns: string 
 *
 *		Parameters: string data
 *
 *		Reads I2C data from CleanFlight
 */
String DataHandler::readI2C(String data){
 String retData = "";
	if(data != ""){
		agg->addToAggregator(data);
	}

 return retData;
}


/*	Function writeI2C(string data)
 *		Returns: VOID 
 *
 *		Parameters: string data
 *
 *		Writes I2C data back to CleanFlight (throughput scaling)
 */
void DataHandler::writeI2C(String data){
	return;
}

