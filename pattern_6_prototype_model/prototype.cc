#include "prototype.h"

prototype::~prototype(){

}

void concretePrototype::setidp(int idp){
	this->idp = idp;
}

void concretePrototype::setid(int id){
	this->id = id;
}

int concretePrototype::getidp(){
	return idp;
}

int concretePrototype::getid(){
	return id;
}

concretePrototype* concretePrototype::clone(){
	concretePrototype* res = new concretePrototype;
	(*res) = *this;
	return res;
}