/*
观察者模式：一个subject对象对应多个observer对象。subject类和observer类相互依赖。根据依赖倒转原则，将
subject和observer抽象出来，则可以减少两类之间的耦合。当subject类的状态改变时，通过调用notify方法，间
接调用update方法将所有observer状态更新。观察者模式的缺点在于所有concreteobserver类都需要有同名的update
方法，对于已有的类，且没有改方法或方法名不同就不能使用。事件委托方法可以加以修正。
*/
#ifndef _observer_h
#define _observer_h

#include <list>
#include <string>

class subject{
	list<observer*> observers;
	string state;
public:
	virtual void attach(observer* ob) = 0;
	virtual void detach(observer* ob) = 0;
	void setstate(string state);
	stirng getstate();
	virtual void notify() = 0;
};

class observer{
	string name;
	subject* sub;
public:
	observer(string name, subject* sub);
	virtual void update() = 0;
};

class concreteobserver1:public observer{
	concreteobserver1(stirng name,subject* sub);
	~concreteobserver1();
	void update();
};

#endif