#ifndef _factory_h_
#define _factory_h_

#include "operation.h"

class factory{
public:
	static operation* createOperation(char operate);
};

#endif