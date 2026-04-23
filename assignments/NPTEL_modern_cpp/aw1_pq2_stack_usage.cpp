// Fill in the blank at LINE-1 to declare a stack variable.
// Fill in the blank at LINE-2 to push value into stack.
// Fill in the blank at LINE-3 with appropriate statement.

#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main() {
char s[20];
char c;
cin >> s;
stack<char> st; //LINE-1
for(int i = 0; i < strlen(s); i++)
st.push(s[i]); //LINE-2
for(int i = 0; i < strlen(s) - 1; i++) {
c = st.top(); //LINE-3
cout << c;
st.pop();
}
cout << endl;
return 0;
}
