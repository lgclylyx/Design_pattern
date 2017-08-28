#include "construct.h"

int main(int argc,char** argv){
	director* d = new director;
	builder* b1 = new concretebuilder1;
	builder* b2 = new concretebuilder2;

	d->construct(b1);
	product* p = b1->getresult();
	delete p;

	d->construct(b2);
	p = b2->getresult();
	delete p; 
}