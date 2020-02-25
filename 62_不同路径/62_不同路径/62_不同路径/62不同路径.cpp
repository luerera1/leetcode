class Solution {
public:
	int uniquePaths(int m, int n) {
		if (0 == m || 0 == n) return 1;
		vector<vector<int>> dp(m, vector<int>(n));°°°°//°°ªÚ’ﬂint dp[m][n];
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (0 == i || 0 == j) dp[i][j] = 1;
				else {
					dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
				}
			}
		}
		return dp[m - 1][n - 1];
	}
};

