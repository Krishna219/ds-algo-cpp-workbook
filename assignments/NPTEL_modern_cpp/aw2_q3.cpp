#include<iostream>
using namespace std;
#define INCR(x) x+1
int main(){
	int a=2;
	cout<< INCR(a++) << " " << INCR(a++) << endl;
	return 0;
}
