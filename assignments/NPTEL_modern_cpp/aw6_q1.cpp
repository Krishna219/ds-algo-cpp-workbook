#include<iostream>
using namespace std;

class Base{
public:
	void fun1() { cout << "a" ;}
	virtual void fun2() { cout << "c";}
};

class Derived: public Base{
public:
	virtual void fun1() { cout << "b";}
	void fun2() { cout << "d";}

};

int main(){
	Base *t = new Derived();
	t->fun1();
	t->fun2();
	return 0;
}
