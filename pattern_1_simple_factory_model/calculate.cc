#include "calculate.h"

/*
	与后台的业务逻辑分离，则相应的代码与后台业务逻辑无关，则在其他情况下，也能复用相应的代码
*/

int main(int argc, char** argv){
	operation* oper;
	oper = factory::createOperation('+');
	oper->setNumA(1.0);
	oper->setNumB(2.1111);
	printf("%lf\n",oper->getResult());
}