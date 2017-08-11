#include "strategy.h"

strategy::~strategy(){
	
}

strategy1::strategy1(double rate):debate(rate){

}

double strategy1::getResult(double money){
	return money*debate;
}

double strategy2::getResult(double money){
	return money;
}