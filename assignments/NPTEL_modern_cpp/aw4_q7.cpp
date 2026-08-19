#include<iostream>
using namespace std;

class Integer{
	int data;
public:
	Integer(int x) : data(x) {}
	friend void display(const Integer&);	// LINE -1 such that thr ouput is 110
};

void display (const Integer &d){
	cout << d.data+100 << endl;
}

int main(){
	Integer m(10);
	display(m);
	return 0;
}
