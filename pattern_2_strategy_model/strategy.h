#ifndef _strategy_h
#define _strategy_h

/*
策略模式的所有算法（strategy1，strategy2）都是完成相同的工作，但有不同的实现.即都是完成计算总价的任务，但是使用了两种不同的计算策略。
*/

class strategy{
public:
	virtual ~strategy();
	virtual double getResult(double money)=0;
};

class strategy1:public strategy{
public:
	strategy1(double rate);
	double getResult(double money);
private:
	double debate;
};

class strategy2:public strategy{
public:
	double getResult(double money);
};

#endif