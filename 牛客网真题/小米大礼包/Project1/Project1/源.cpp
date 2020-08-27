#include <iostream>
#include <vector>
using namespace std;
const int N = 250;
const int M = 100100;


int main()
{
	int n, m;
	cin >> n;
	vector<int> num(N);
	vector<vector<bool>> dp(N, vector<bool>(M, false));
	dp[0][0] = true;
	for (int i = 1; i <= n; i++) {
		cin >> num[i];
		dp[i][0] = true;
	}
	cin >> m;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
			dp[i][j] = dp[i - 1][j] || (j >= num[i] && dp[i - 1][j - num[i]]);
		}
	}
	cout << dp[n][m] << endl;
	system("pause");

}