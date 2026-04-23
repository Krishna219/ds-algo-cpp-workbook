#include <iostream>
#include <string>
using namespace std;
int CompareString(string s1, string s2){
int l1, l2;
l1 = s1.length();
l2 = s2.length();
if (l1 < l2)// compare length and return -1 if s1 < s2
return -1;
else if (l1 == l2)// return 0 if they are equal
return 0;
else
return 1;
}
int main(){
string s1, s2;
cin >> s1 >> s2;
int res = CompareString(s1, s2);
if(res == 0)
cout << "Equal length";
else if(res == 1)
cout << s1 << " is longer";
else
cout << s2 << " is longer";
cout << endl;
return 0;
}
