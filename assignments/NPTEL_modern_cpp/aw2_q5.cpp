#include<iostream>
using namespace std;

void modify(int a, int &b, int *c){
	b = a * 2;
	*c = a + 5;
}

int main(){
	int x=2, y, z;
	modify(x,y,&z);
	cout<<x<<" "<<y<<" "<<z<<endl;
	return 0;
}
