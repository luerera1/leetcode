class Solution {
public:
	void moveZeroes(vector<int>& nums) {
		int i = 0, j = 0;
		int carry = 0;
		for (i = 0, j = 0; i<nums.size(); i++){
			if (nums[i])
			{
				swap(nums[i], nums[j++]);
			}
		}
	}
};