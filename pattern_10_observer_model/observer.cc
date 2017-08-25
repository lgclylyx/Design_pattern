#include "observer.h"

void subject::setstate(string state){
	this.state = state;
}

string subject::getstate(){
	return this.state;
}

observer::observer(string name, subject* sub):name(string),sub(sub){

}

concreteobserver1::concreteobserver1(stirng name,subject* sub):observer(name,sub){

}

void concreteobserver1::update(){
	//...
}