#include<iostream>
using namespace std;

int gdata = 10;

class Increment{
	int mdata;
public:
	Increment(int mdata_=0) : mdata(++mdata_) {++gdata;} //LINE-1
	~Increment() { mdata=0; gdata--;}
	void print() { cout << mdata << ", " << gdata << endl; }
};

void func() {
	Increment ob;
	ob.print();
}

int main(){
	Increment ob;
	func();
	ob.print();
	return 0;
}
