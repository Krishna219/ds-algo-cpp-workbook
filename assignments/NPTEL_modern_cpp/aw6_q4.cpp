#include<iostream>
using namespace std;

class myClass{
public:
	virtual void fun() = 0; //LINE-1
};

void myClass::fun(){
	cout <<"Pure virtual function";
}

int main(){
	myClass m; //LINE-2
	myClass *p = new myClass(); // LINE-3
	p->fun(); // LINE-4
	return 0;
}
