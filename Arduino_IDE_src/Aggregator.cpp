#include "Aggregator.h"


Aggregator::Aggregator(){
  myStore = new BBStorage();
  return;
}

void Aggregator::addToAggregator(String data){
	//this->currentDataSet = this->currentDataSet + data + "\n";
	
	return;
}

void Aggregator::forcePushAggregator(){
  myStore->testAndReplace(this->currentDataSet);
	return;
}

