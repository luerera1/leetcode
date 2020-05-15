class Solution {
public:
	int findPairs(vector<int>& nums, int k) {
		int len = nums.size();
		sort(nums.begin(), nums.end());
		if (k<0) return 0;
		if (len == 0 || len == 1) return 0;
		int i = 0, j = 1;
		int ans = 0;
		while (j != len)
		{
			if (i>0 && nums[i] == nums[i - 1])
			{
				i++; continue;
			}
			if (j<len - 1 && nums[j] == nums[j + 1])
			{
				j++; continue;
			}
			if (j == i)
			{
				j++; continue;
			}
			if (nums[j] - nums[i]>k)
				i++;
			else if (nums[j] - nums[i]<k)
				j++;
			else{ ans += 1; j++; }
		}
		return ans;
	}
};