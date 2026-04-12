#include <iostream>
#include <vector>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	vector<int> a(N);
	for(int i=0; i<N; i++)
		cin >> a[i];
		
	cout << "Number of elements: " << N << endl;
	cout << "Elements: " << endl;
	for(int i=0; i<N; i++)
		cout << a[i] << endl;
	return 0;	
}
