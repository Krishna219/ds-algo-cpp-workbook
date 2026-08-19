#include<iostream>
using namespace std;

class myClass{
private:
	char c;
public:
	myClass() : c('a') { cout << "myClass() ";}
	myClass(char _c) : c(_c) { cout << "myClass(char) ";}
	myClass(const myClass& _oc) : c(_oc.c) { cout << "myClass(myClass&) ";}
	~myClass() { cout << c << " ";}
};

int main(){
	myClass d1('c'); //LINE-1
	myClass d2(); //LINE-2
	myClass d3 = 'z'; //LINE-3
	myClass d4 = d3; //LINE-4
	return 0;
}

