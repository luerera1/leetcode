#includeiostream
#includevector
#includealgorithm
using namespace std;
int main(){
	int n;
	cinn;
	vectorint a(n);
	for (int i = 0; in; i++){
		cina[i];
	}
	vectorint b(n);
	for (int i = 0; in; i++){
		cinb[i];
	}
	vectorvectorint dp(3, vectorint(n + 1));
	dp[0][0] = dp[1][0] = dp[2][0];
	for (int i = 1; i = n; ++i) {
		dp[0][i] = max(dp[0][i - 1], max(dp[1][i - 1], dp[2][i - 1]));
		if (a[i - 1]) {
			dp[1][i] = max(dp[2][i - 1], dp[0][i - 1]) + 1;
		}
		if (b[i - 1]) {
			dp[2][i] = max(dp[1][i - 1], dp[0][i - 1]) + 1;
		}
	}
	cout  n - max(dp[0][n], max(dp[1][n], dp[2][n]))  endl;
	return 0;
}


