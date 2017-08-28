#include "abFactory.h"

int main(){
	simplefactory* abf = new simplefactory;
	productA* a = abf -> createProductA();
	productB* b = abf -> createProductB();
}