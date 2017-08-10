#include "operation.h"

void operation::setNumA(double lhs){
	_numA = lhs;
}

void operation::setNumB(double lhs){
	_numB = lhs;
}

double operation::getNumA(){
	return _numA;
}

double operation::getNumB(){
	return _numB;
}

double operation::getResult(){
	double result = 0.0;
	return result;
}

double operationAdd::getResult(){
	return _numA+_numB;
}