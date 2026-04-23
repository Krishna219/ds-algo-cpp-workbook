#include <iostream>
#include <vector>
using namespace std;
int main() {
const int size = 3, c = 65; // 65 literal 'A'
vector<char> vec(size, 'A'); // 'A, A, A'
for (int i = 1; i <= 2; i++)
vec.push_back(65 + i); // 66 'B' 67 'C': 'A, A, A, B, C'
vec.resize(10, 90); // 90 'Z': 'A, A, A, B, C, Z, Z, Z, Z, Z'
vec.resize(8); // 'A, A, A, B, C, Z, Z, Z'
for (int i = 0; i < vec.size(); i++)
cout << vec[i] << " ";
cout << endl;
return 0;
}
