#include <iostream>
#include <algorithm>
using namespace std;
int main () {
int data[] = {50, 30, 40, 10, 20};
sort (&data[2], &data[4]); // sort(start, end) doesn't include end
// here two elements &data[2] and &data[3] - 40, 10, this will be sorted to 10, 40
for (int i = 0; i < 5; i++)
cout << data[i] << " ";
cout << endl;
return 0;
}
