#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	int p[200], a[200], q[200], b[200];
	for (int i = 0; i<n; i++){
		cin >> p[i] >> a[i] >> q[i] >> b[i];
	}
	vector<int> dp(200);
	for (int i = 0; i<n; i++){
		for (int j = 120; j >= 0; j--){
			if (p[i] <= j){
				dp[j] = max(dp[j], dp[j - p[i]] + a[i]);
			}
			if (q[i] <= j){
				dp[j] = max(dp[j], dp[j - q[i]] + b[i]);
			}
		}
	}
	cout << dp[120] << endl;
	return 0;
}