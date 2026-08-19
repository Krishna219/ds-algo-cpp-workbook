#include<iostream>
using namespace std;

class Rectangle {
	int _x;
	int _y;
	Rectangle(int x, int y) {
		_x = x;
		_y = y;
		cout<< _x << " " << _y;	
	}
};

int main() {
	Rectangle r(1, 9);
	return 0;
}
