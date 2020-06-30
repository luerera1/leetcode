class Solution {
public:
	bool checkSubarraySum(vector<int>& nums, int k) {
		unordered_map<int, int> m{ { 0, -1 } };
		int sum = 0;
		for (int i = 0; i<nums.size(); i++){
			sum += nums[i];
			int t = (k == 0) ? sum : (sum%k);
			if (m.count(t)){
				if (i - m[t]>1) return true;
			}
			else
				m[t] = i;
		}
		return false;
	}
};