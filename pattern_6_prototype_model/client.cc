#include "prototype.h"
#include <cstdio>

int main(){
	concretePrototype* a = new concretePrototype;
	a->setidp(1);
	a->setid(2);
	concretePrototype* b = a->clone();
	b->setid(3);
	printf("%d,%d\n",b->getidp(),b->getid());
}