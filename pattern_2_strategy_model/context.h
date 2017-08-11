#ifndef _context_h
#define _context_h

#include "strategy.h"

class context{
	strategy* s;
public:
	context(char type);
	~context();
	double getResult(double money);
};

#endif