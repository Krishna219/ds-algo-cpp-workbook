#include<iostream>
using namespace std;
class FrndClass{
	int d;
public:
	FrndClass(int x) : d(x) {}
	void friend show(const FrndClass &t); // friend void declaration works
};

void show(const FrndClass &t){
	cout << t.d;
}

int main(){
	FrndClass t(10);
	show(t);
	return 0;
}
