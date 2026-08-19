#include<iostream>
using namespace std;
class PIClass{
	double a;
public:
	PIClass(double _a) : a(_a) {}
	void update(double x) const { a = x; }
	void print() const { cout << a; }
};
int main(){
	const PIClass p(3);
	p.update(3.14);
	p.print();
	return 0;
}
