#ifndef _constructor_h
#define _constructor_h

#include <list>
#include <string>
/*
class builder为创建一个具体的class prodect对象提供各个抽象接口，其子类如concretebuilder等具体实现其中的各个接口。
class director用于控制整体的创建product的流程，对于不同的concretebuilder,其流程是不变的。
*/
class product{
public:
	void add(string part);
private:
	list<string> parts;
};

class builder{
public:
	virtual void buildpartA()=0;
	virtual void buildpartB()=0;
	virtual product* getresult()=0;
};

class concretebuilder1: public builder{
public:
	concretebuilder1();
	void buildpartA();
	void buildpartB();
	product* getresult();
private:
	product* p;
};

class concretebuilder2: public builder{
public:
	concretebuilder2();
	void buildpartA();
	void buildpartB();
	product* getresult();
private:
	product* p;
};

class director{
public:
	void construct(builder* build);
};

#endif