#ifndef _factory_h
#define _factory_h

class factory{
public:
	virtual calculate* createfactory()=0;
};

class addfactory: public factory{
public:
	calculate* createfactory();
};

class calculate{
public:
	virtual double operation()=0;
private:
	double num1;
	double num2;
};

class add: public calculate{
public:
	double operation();
};

#endif