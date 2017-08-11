#include "client.h"

/*
客户端程序通过统一的方法调用后端的不同的方法，在客户端只需知道context类即可，从而耦合度更低。
*/

int main(int argc, char** argv){
	double total = 0.0;
	context* cs = new context('1');
	printf("%lf\n",cs->getResult(10));
}