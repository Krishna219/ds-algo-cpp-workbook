#include<iostream>
using namespace std;

class CPPClass{
	int a=1;
public:
	int b=2;
	int get_a() { return a;}
	int get_b() { return b;}
};

int main(){
	CPPClass t;
	int m, n;
	m = t.a; //LINE-1
	n = t.b; //LINE-2
	m = t.get_a(); //LINE-3
	n = t.get_b(); //LINE-4
	return 0;
}
