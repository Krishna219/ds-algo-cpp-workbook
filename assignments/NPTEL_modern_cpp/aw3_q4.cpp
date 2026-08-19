#include<iostream>
using namespace std;

class Test {
	int x, y;
public:
	Test(int _x, int _y) : x(_x), y(_y) {}
	Test(Test &c) : x(c.x), y(c.y) { }
	void change(Test *new_c) {this = new_c;}
	void show() { cout << x << ", " << y << endl; }
};

int main(){
	Test c1(1, 2);
	Test c2(10, 20);
	c1.change(&c2);
	c1.show();
	return 0;
}
