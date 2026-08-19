#include<iostream>
using namespace std;
int add(int a=0){ return a;}
int add(int a=0, double b=0.0){return a+b-2;}
int add(int a=0, char c='a'){return a+c-1;}
int add(char c='z', int a=0){return a+c;}
int main(){
	int c = add(10,50);
	cout << c << endl;
	return 0;
}
