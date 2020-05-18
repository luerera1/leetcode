class Solution {
public:
	int numSubarrayProductLessThanK(vector<int>& nums, int k) {
		int sum = 1;
		int left = 0, res = 0;
		int n = nums.size();
		if (k <= 1) return 0;
		for (int right = 0; right<n; right++){
			sum *= nums[right];
			while (sum >= k){
				sum /= nums[left++];
			}
			res += right - left + 1;
		}
		return res;
	}
};