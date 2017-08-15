#include "component.h"
#include <cstdio>

int main(int argc, char** argv){
	concreteComponent1* instanceA = new concreteComponent1;
	concreteComponent2* instanceB = new concreteComponent2;

	decoratorA* a = new decoratorA;
	decoratorB* b = new decoratorB;

	a->setComponent(instanceA);
	a->operation();

	a->setComponent(instanceB);
	a->operation();

	b->setComponent(a);
	b->operation();
}