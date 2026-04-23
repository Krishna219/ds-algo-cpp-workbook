#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int arr[] = { 1, 2, 3, 4, 5 };
for (int i = 0; i < 1; i++) {
int j = arr[i];
replace(arr, arr + 5, j, *(arr + 4 - i)); // same as accesssing arr[4-i]
}
for (int i = 0; i < 5; ++i)
cout << arr[i] << " ";
cout << endl;
return 0;
}
