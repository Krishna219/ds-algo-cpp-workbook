#include<iostream>
using namespace std;
int main() {
	int a = 10;
	const int* p = &a;
	const int c = 20;
	p = &c; //Line 1
	cout << *p;

	return 0;
}
