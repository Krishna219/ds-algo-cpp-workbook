#include<iostream>
using namespace std;
int x=0;

class Base{
public:
	Base() {x=x+2;}
	~Base() {x=x-1;}
};

class Derived : public Base{
public:
	Derived(){ x=x+3; }
	~Derived(){ x=x-2; }
};

void fun(){
	Derived t;
	Base *t1 = new Derived();
	cout << x << " ";
	delete t1;
}

int main(){
	fun();
	cout << x;
	return 0;
}
