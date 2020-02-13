class Solution {
public:
	int missingNumber(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		if (nums[nums.size() - 1] != nums.size())
		{
			return nums.size();
		}
		else if (nums[0] != 0)
		{
			return 0;
		}
		else
		{
			for (int i = 1; i <= nums.size() - 1; i++)
			{
				if (nums[i] != i)
					return i;
			}
		}
		return -1;
	}
};