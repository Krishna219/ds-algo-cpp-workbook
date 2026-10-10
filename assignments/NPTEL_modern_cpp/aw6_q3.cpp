#include<iostream>
using namespace std;

class A{
public:
	A() { cout <<"1 ";}
	~A() { cout <<"-1 ";}
};

class B: public A{
public:
	B() { cout <<"2 ";}
	virtual ~B() { cout <<"-2";}
};

class C: public B{
public:
	C() { cout <<"3 ";}
	~C() { cout <<"-3"; }
};

int main(){
	A *t1 = new C;
	delete t1;
	return 0;
}
