#include<iostream>
using namespace std;
class Base{
public:
	virtual void fun() {}
};

class Derived: public Base{
	int q;
public:
	void fun(int x) {q = x + 10;}
};

int main(){
	Derived t1;
	Base *t2 = new Derived();
	t1.fun(); //LINE-1
	t1.fun(10); //LINE-2
	t2->fun(); //LINE-3
	t2->fun(10); //LINE-4
	return 0;
}
