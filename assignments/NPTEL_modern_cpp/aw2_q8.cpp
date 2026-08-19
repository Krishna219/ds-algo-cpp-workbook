#include<iostream>
using namespace std;

enum class Colour {Red = 1, Green, Blue};

int main(){
	Colour c = Colour::Red;
	cout << static_cast<int>(c+1); //Line-1
	return 0;
}
