#ifndef _prototype_h
#define _prototype_h

class prototype{
public:
	virtual prototype* clone() = 0;
	virtual ~prototype();
};

class concretePrototype: public prototype{
	int idp;
	int id;
public:
	void setidp(int idp);
	void setid(int id);
	int getidp();
	int getid();
	concretePrototype* clone();
};

#endif