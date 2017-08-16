#include "proxy.h"
#include <cstdio>

subject::~subject(){

}

void realsubject::operation(){
	printf("realsubject.\n");
}

void proxy::operation(){
	if(rs)
		rs->operation();
	else{
		rs = new realsubject;
		rs ->operation();
	}
}

proxy::~proxy(){
	if(!rs)
		delete rs;
}