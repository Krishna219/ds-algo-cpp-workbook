#include <iostream>
#include <algorithm>
using namespace std;
void replaceVal(int arr[], int n, int x, int y){
replace(arr, arr+n, x, y); // LINE-1
}
void reverseArr(int arr[], int n){
reverse(arr, arr+n); // LINE-2
}
int main(){
int arr[] = {1, 4, 3, 4, 2, 4};
int x, y;
cin >> x >> y;
int n = sizeof(arr)/sizeof(arr[0]);
replaceVal(arr, n, x, y);
for(int i = 0; i < n; i++)
cout << arr[i] << " ";
cout << endl;
reverseArr(arr, n);
for(int i = 0; i < n; i++)
cout << arr[i] << " ";
cout << endl;
return 0;
}
