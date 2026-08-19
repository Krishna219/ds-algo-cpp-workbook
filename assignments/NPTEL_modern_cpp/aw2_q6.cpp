#include<iostream>
using namespace std;

int& func(int& x){ //Line-1
	return x=x*5;
}

int main(){
	int a=3, b=4;
	int& c=func(a);
	cout << a << " " << c << " ";
	func(a) = b;
	cout<< a << " " << c;
	
	return 0;
}
