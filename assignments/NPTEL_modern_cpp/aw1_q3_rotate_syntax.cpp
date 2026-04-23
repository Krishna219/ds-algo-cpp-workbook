
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
// rotate(first, middle, last) middle and last pointer will be -1 upto but not including
// {first, middle, last} - range affected
// {middle, last-1, first, middle-1} - will become this
rotate(arr.begin(), arr.begin()+2, arr.begin()+4); 
// begin (first) : 1, middle (begin + 2) : 3, last (begin + 4) : 5 (not including). range affected {1, 2, 3, 4}
// will become {3, 4, 1, 2}, remaining is unaffected
for(auto i : arr)
cout << i << " ";
cout << endl;
return 0;
}
