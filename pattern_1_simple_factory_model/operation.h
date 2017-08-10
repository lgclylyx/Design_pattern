#ifndef operation_h_
#define operation_h_


class operation{
protected:
	double _numA;
	double _numB;
public:
	void setNumA(double lhs);
	void setNumB(double lhs);
	double getNumA();
	double getNumB();
	virtual double getResult()=0;
};

/*
	每一种操作都是operation类的子类，则需要增加其他操作时，只需增加其他操作时，只需增加相应的类，实现相应的getResult接口即可。
*/

class operationAdd:public operation{
public:
	double getResult();
};

#endif 