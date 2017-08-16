#ifndef _proxy_h
#define _proxy_h

class subject{
public:
	virtual void operation()=0;
	virtual ~subject();
};

class realsubject: public subject{
public:
	void operation();
};

class proxy: public subject{
	realsubject* rs;
public:
	void operation();
	~proxy();
};

#endif