class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int res = INT_MIN;
		int numsSize = int(nums.size());
		vector<int> dp(numsSize);
		dp[0] = nums[0];
		res = dp[0];
		for (int i = 1; i<numsSize; i++){
			dp[i] = max((dp[i - 1] + nums[i]), nums[i]);
			res = max(res, dp[i]);
		}
		return res;
	}
};