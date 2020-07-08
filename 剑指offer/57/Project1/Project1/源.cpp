class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> res;
		int i = 0, j = nums.size() - 1;
		while (i<j){
			int sum = nums[i] + nums[j];
			if (sum == target){
				res.push_back(nums[i]);
				res.push_back(nums[j]);
				break;
			}
			if (sum>target) j--;
			else i++;
		}
		return res;
	}
};