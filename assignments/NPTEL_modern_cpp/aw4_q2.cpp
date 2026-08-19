#include<iostream>
using namespace std;
int x = 0;
namespace ns {
	int x = 2;
}
int main(){
	using namespace ns; //LINE-1 appropriate fill to print 012
	int x = 1;
	{
		cout << ::x << x << ns::x;
	}
	return 0;
}
