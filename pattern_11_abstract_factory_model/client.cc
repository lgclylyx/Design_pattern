#include "abFactory.h"

int main(){
	abFactory* abf = new concretefactory1;
	productA* a = abf -> createProductA();
	productB* b = abf -> createProductB();
}