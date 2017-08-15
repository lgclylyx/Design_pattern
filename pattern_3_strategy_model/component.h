#ifndef _component_h
#define _component_h

/*
component: base of all class
*/
class component{
public:
	virtual ~component();
	virtual void operation()=0;
};

/*
concreteComponent1: main class 1
*/
class concreteComponent1: public component{
public:
	void operation();
};

/*
concreteComponent2: main class 2
*/
class concreteComponent2: public component{
public:
	void operation();
};

/*
decorator: used to add new behavior for main class
*/
class decorator: public component{
public:
	void setComponent(component* comp);
	virtual void operation();
private:
	component* _comp;
};

/*
decratorA: new behavior A for main class
*/
class decoratorA:public decorator{
public:
	void operation();
	void behavior();
};

/*
decoratorB: new behavior B for main class
*/
class decoratorB: public decorator{
public:
	void operation();
	void behavior();
};



#endif