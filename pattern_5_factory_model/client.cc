#include "factory"

int main(int argc, char** argv){
	factory* fc = new addfactory;
	calculate* cal = fc->createfactory();
	cal->operation();
}