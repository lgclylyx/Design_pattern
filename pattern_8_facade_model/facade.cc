#include "facade.h"
#include <cstdio>

facade::facade(){
	one = new subsystem1;
	two = new subsystem2;
	three = new subsystem3;
}

facade::~facade(){
	delete one;
	delete two;
	delete three;
}

void facade::methodA(){
	one.method();
	two.method();
}

void facade::methodB(){
	one.method();
	three.method();
}

void subsystem1::method(){
	printf("system 1\n");
}

void subsystem2::method(){
	printf("system 2\n");
}

void subsystem3::method(){
	printf("system 3\n");
}