#include "component.h"
#include <cstdio>


component::~component(){

}

void concreteComponent1::operation(){
	printf("concrete Component 1\n");
}

void concreteComponent2::operation(){
	printf("concrete Component 2\n");
}

void decorator::setComponent(component* comp){
	_comp = comp;
}

void decorator::operation(){
	if(_comp){
		printf("to ");
		_comp->operation();
	}
}

void decoratorA::operation(){
	printf("decoratorA:");
	behavior();
	decorator::operation();
}

void decoratorA::behavior(){
	printf("behaviorA ");
}

void decoratorB::operation(){
	printf("decoratorB:");
	behavior();
	decorator::operation();
}

void decoratorB::behavior(){
	printf("behaviorB ");
}
