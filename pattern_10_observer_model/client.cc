#include "observer.h"

int main(){
	subject* s = new concretesubject;

	observer* co1 = new concreteobserver("name",s);

	s.attach(co1);

	s.setstate("new state");

	s.notify();
}