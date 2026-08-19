#include<iostream>
using namespace std;

namespace ns1{
	int x=10;
	namespace ns2{
		int x = 20;
	}
}

int main(){
	using namespace ns1; // LINE-1 such that the program will print 20
	cout << ns1::x + ns2::x << endl;
	return 0;
}
