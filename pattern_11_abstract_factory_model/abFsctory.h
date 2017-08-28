#ifndef _abfactory_h
#define _abfactory_h

class abfactory{
public:
	virtual prodectA* createProdectA() = 0;
	virtual productB* createProdectB() = 0;
};

class concretefactory1:public abfactory{
public:
	productA* createProdectA(){
		return new productA1;
	}
	productB* createProdectB(){
		return new productB1;
	}
};

class concretefactory2:public abfactory{
public:
	productA* createProdectA(){
		return new productA2;
	}
	productB* createProdectB(){
		return new productB2;
	}
};


char simplefactory::ch = '1';

class productA{

};

class productA1: public productA{
public:
	productA1(){
		printf("productA1\n");
	}
};

class productA2: public productA{
public:
	productA2(){
		printf("productA2\n");
	}
};

class productB{

};

class productB1: public productB{
public:
	productB1(){
		printf("productB1\n");
	}
};

class productB2: public productB{
public:
	productB2(){
		printf("productB2\n");
	}
};

#endif