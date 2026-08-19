#include<iostream>
using namespace std;
namespace name {
	class Test{
		const int a;
	public:
		Test(int x) : a(x) {}
		void print() const { cout << a;}
	};
}

int main(){
	const name::Test t(5); //LINE-1 such that program prints 5
	t.print();
	return 0;
}
