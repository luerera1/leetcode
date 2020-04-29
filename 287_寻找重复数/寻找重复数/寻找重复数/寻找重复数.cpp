class Solution {
public:
	int findDuplicate(vector<int>& nums) {
		unordered_map<int, int> m;
		int res = 0;
		for (int i = 0; i<nums.size(); i++){
			m[nums[i]]++;
		}
		for (int i = 0; i<nums.size(); i++){
			if (m[nums[i]]>1){
				res = nums[i];
			}
		}
		return res;
	}
};