#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int array[] = {1,2,3,4,5};
int key = 5;
// binary_search(start, end, find) doesn't include end
// can also use binary_search(array, array+4, key)
if(binary_search(&array[0], &array[4], key)) // fill in the line so that program prints "not found"
cout << "found";
else
cout << "not found";
cout << endl;
return 0;
}
