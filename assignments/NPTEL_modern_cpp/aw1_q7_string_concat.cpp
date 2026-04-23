#include <iostream>
#include <string>
using namespace std;
int main() {
string word1 = "CPP is ";
string word2 = "fun";
string final = word1.append(word2); // also word1 + word2
cout << final;
cout << endl;
return 0;
}
