#include<iostream>
using namespace std;

class Check{
public:
	Check() { cout<< "Constructor 1" <<endl; }
	Check(int x=0) { cout<<"Constructor 2"<<endl; }
	Check(int a, int b) { cout<<"Constructor 3"<<endl; }
};

int main(){
	Check m1;
	return 0;
}
