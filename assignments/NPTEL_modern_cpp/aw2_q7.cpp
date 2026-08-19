#include<iostream>
using namespace std;
int main(){
	int a=2, b=7;
	const int &p = a++ + ++b;
	cout<<p;
	return 0;
}
