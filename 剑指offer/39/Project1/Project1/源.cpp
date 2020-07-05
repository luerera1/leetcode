class Solution {
public:
	int majorityElement(vector<int>& nums) {
		unordered_map<int, int> m;
		for (int i = 0; i<nums.size(); i++){
			m[nums[i]]++;
		}
		int res = nums.size() / 2;
		for (int i = 0; i<nums.size(); i++){
			if (m[nums[i]]>res){
				return nums[i];
			}
		}
		return 0;
	}
};