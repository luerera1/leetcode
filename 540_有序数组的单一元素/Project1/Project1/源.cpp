class Solution {
public:
	int singleNonDuplicate(vector<int>& nums) {
		int res = 0;
		if (nums.size() == 1) return nums[0];
		for (int i = 0, j = 1; j<nums.size();){
			if (nums[i] == nums[j]){
				i += 2;
				j += 2;
				if (j == nums.size()){
					res = nums[i];
					break;
				}
				continue;
			}
			else{
				res = nums[i];
				break;
			}
		}
		return res;
	}
};