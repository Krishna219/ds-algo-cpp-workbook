#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N; // length of sequence
	cin >> N;
	
	vector<int> a(N); // elements of sequence
	for(int i=0; i<N; i++)
		cin >> a[i];
	
	// uncomment for pretty print
	/*	
	cout << "Number of elements: " << N << endl;
	cout << "Elements: ";
	for(int i=0; i<N; i++)
		cout << a[i] << " ";
	cout << endl;
	*/
		
	vector<int> dp(N, 1); // base case Best(1) = 1, and every other element must divide itself hence min is 1.
	
	int ans = 1; // length of longest subseqence
	
	for(int i=0; i<N; i++){
		for(int j=0; j<i; j++){
			if(a[i]%a[j] == 0){
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ans = (dp[i] > ans) ? dp[i] : ans;
	}
	
	// uncomment for pretty print
	/*	
	cout << "DP table: ";
	for(int i=0;i <N; i++){
		cout << dp[i] << " ";
	}
	cout << endl;
	cout << "Longest fully dividing subsequence: " << ans << endl;
	*/
	cout << ans << endl;
	return 0;	
}
