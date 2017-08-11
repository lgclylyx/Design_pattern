#include "context.h"
/*
通过context类用相同的策略，使用简单工厂模式创建各个方法的实例，通过context类调用算法实现相应的功能，
从而将客户端与具体的算法隔离开来。

但是在策略模式中，context中还是入简单工厂模式中一样，使用switch生成不同的算法实例，则在增加新的算法的时候，
还是要对context重新进行编译部署。

*/
context::context(char type){
	switch(type){
		case '1':{
			strategy1* s1 = new strategy1(0.8);
			s = s1;
			break;
		}
		case '2':{
			strategy2* s2 = new strategy2();
			s = s2;
			break;
		}
	}
}

context::~context(){
	if(s)
		delete s;
}

double context::getResult(double money){
	return s->getResult(money);
}