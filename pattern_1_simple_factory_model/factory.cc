#include "factory.h"
/*
	根据输入实例化对应的类，在增加了操作的时候，需要在switch中增加相应的分支
*/
operation* factory::createOperation(char operate){
	operation* oper;
	switch(operate){
		case '+':
			oper = new operationAdd;
			break;
		default:
			oper = nullptr;
	}
	return oper;
}