class Solution {
public:
	int cuttingRope(int n) {
		if (n<3) return 1;
		if (n == 3) return 2;
		vector<int> dp(n + 1, 1);
		for (int i = 1; i <= n; i++) dp[i] = i;
		for (int i = 4; i <= n; i++){
			for (int j = 1; j<4; j++){
				dp[i] = max(dp[i], dp[j] * dp[i - j]);
			}
		}
		return dp[n];
	}
};
