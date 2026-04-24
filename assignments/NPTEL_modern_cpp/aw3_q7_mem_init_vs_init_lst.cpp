#include <iostream>
using namespace std;
class Counter {
int a, b, c; // member init order
public:
Counter(int x = 1) : c(x++), b(x++), a(++x) {} //initialiser list order: order of initialization is based on the member init order in class
void print() { cout << a << "," << b << "," << c << endl; }
};
int main() {
Counter d(5);
d.print();
return 0;
}
