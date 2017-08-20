#include "template.h"

int main(int argc, char** argv){
	abstract* c = new concreteclass1;
	c.templatemethod();
	delete c;
	c = new concreteclass2;
	c.templatemethod();
	delete c;
}