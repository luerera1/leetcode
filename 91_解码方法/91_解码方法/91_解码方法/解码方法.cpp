class Solution {
public:
	int numDecodings(string s) {
		int length = s.size();
		if (length == 0 || s[0] == '0') return 0;
		vector<int> dp(length, 0);
		dp[0] = 1;
		for (int i = 1; i < length; i++){
			//第i个字符单独和前面的dp[i-1]组合的情况
			//如果当前字符为0则跳过 因为0不能单独组成字符
			if (s[i] != '0')
				dp[i] += dp[i - 1];
			//第i-1和i个字符可以合并的情况
			//如果i=1,则+1，否则加上前两个字符的组合数
			if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] >= '0' && s[i] <= '6')){
				if (i - 1 > 0)
					dp[i] += dp[i - 2];
				else
					dp[i] += 1;
			}
		}
		return dp[length - 1];
	}
};

