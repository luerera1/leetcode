class Solution {
public:
	int minSubArrayLen(int s, vector<int>& nums) {
		int left = 0, right = 0;
		int n = nums.size();
		int sum = 0, res = n + 1;
		while (right<n){
			while (sum<s&&right<n){
				sum += nums[right++];
			}
			while (sum >= s){
				res = min(res, right - left);
				sum -= nums[left++];
			}
		}
		return res == n + 1 ? 0 : res;
	}
};