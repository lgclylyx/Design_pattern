/*
	外观模式为用户提供了一个访问复杂子系统的同一接口，降低模块间的耦合度。
*/

#ifndef _facade_h
#define _facade_h

class facade{
	subsystem1 *one;
	subsystem2 *two;
	subsystem3 *three;
public:
	facade();
	~facade();
	void methodA();
	void methodA();
};

class subsystem1{
public:
	void method();
};

class subsystem2{
public:
	void method();
};

class subsystem3{
public:
	void method();
};
#endif