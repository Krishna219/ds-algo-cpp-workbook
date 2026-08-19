#include<iostream>
using namespace std;

class StatClass{
	static int s;
public:
	StatClass() { s++;}
	static int get() { return s;}
};

int StatClass::s=0;
int main(){
	cout << StatClass::get() << " ";
	StatClass s[2];
	cout << StatClass::get();
	return 0;
}
