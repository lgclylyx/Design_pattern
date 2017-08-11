#ifndef _context_h
#define _context_h

/*
因为客户端与后端算法隔离开来，所以对于客户端程序只需提供context类的定义，对于具体的算法类只需前置申明即可。
*/

class strategy;

class context{
	strategy* s;
public:
	context(char type);
	~context();
	double getResult(double money);
};

#endif