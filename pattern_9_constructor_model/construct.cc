#include "construct.h"

void product::add(string part){
	patrs.push_back(part);
}

concretebuilder1::concretebuilder1(){
	p = new product;
}

void concretebuilder1::buildpartA(){
	p->add("elemenet A");
}

void concretebuilder1::buildpartB(){
	p->add("elemenet B");
}

product* concretebuilder1::getresult(){
	return p;
}

concretebuilder2::concretebuilder2(){
	p = new product;
}

void concretebuilder2::buildpartA(){
	p->add("elemenet x");
}

void concretebuilder2::buildpartB(){
	p->add("elemenet y");
}

product* concretebuilder2::getresult(){
	return p;
}

void director::construct(builder* build){
	build->buildpartA();
	build->buildpartB();
}