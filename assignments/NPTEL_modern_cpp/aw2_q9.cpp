#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int *p = new int[5]; //Line-1
	p[0] = 42;
	p[1] = 43;
	cout << *p;
	delete[] p;
	return 0;
}
