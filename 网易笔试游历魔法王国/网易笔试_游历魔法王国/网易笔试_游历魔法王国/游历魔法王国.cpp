#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, L, h = 0;
	cin >> n >> L;
	vector<int> dp(n, 0);
	for (int i = 0; i<n - 2; i++){
		int x;
		cin >> x;
		dp[i + 1] = dp[x] + 1;
		h = max(dp[i + 1], h);
	}
	if (h>L){
		L++;
		cout << L << endl;
	}
	else{
		cout << min(n, h + 1 + (L - h) / 2) << endl;
	}
	return 0;
}