#include<iostream>
using namespace std;

class TestClass{
	int mutable x; // LINE-1 appropriate declaration of x so output is 2
public:
	TestClass(int _x) : x(_x) {}
	void set(int a) const{
		x = a;
	}
	void print() const{
		cout << x << endl;
	}
};

int main() {
	const TestClass tc(6);
	tc.set(2);
	tc.print();
	return 0;
}
