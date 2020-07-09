class Solution {
public:
	vector<int> singleNumbers(vector<int>& nums) {
		vector<int> res;
		map<int, int> m;
		for (int i = 0; i<nums.size(); i++){
			m[nums[i]]++;
		}
		for (int i = 0; i<nums.size(); i++){
			if (m[nums[i]] == 1)
				res.push_back(nums[i]);
		}
		return res;
	}
};