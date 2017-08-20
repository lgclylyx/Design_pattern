#ifndef _template_h
#define _template_h

class abstractclass{
public:
	void templatemethod();
	virtual void primitiveoperation()=0;
};

class concreteclass1: public abstractclass{
public:
	void primitiveoperation();
};

class concreteclass2:public abstractclass{
public:
	void primitiveoperation();
};

#endif