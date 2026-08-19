#include<iostream>
using namespace std;

class TestClass{
	int i;
public:
	TestClass(int i_=0) : i(i_) {cout << i << " ";}
	~TestClass() {cout << i << " ";}
};

TestClass obj1(2); //LINE-1

int main() {
	TestClass *pObj = new TestClass(1); //LINE-2
	TestClass obj2(3); //LINE-3
	{
		TestClass obj3(4); //LINE-4
		delete pObj; //LINE-5
	}//LINE-6
	return 0;
	//LINE-7
}
