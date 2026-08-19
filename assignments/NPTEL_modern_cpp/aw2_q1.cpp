#include<iostream>
using namespace std;
int main(){
	const char ch = 'C'; // LINE-1
	ch = 'Z'; //LINE-2
	cout << ch;
	return 0;
}
