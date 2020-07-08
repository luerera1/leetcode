class Solution {
public:
	bool isStraight(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int king = 0, lose = 0;
		for (int i = 0; i<nums.size() - 1; i++){
			if (nums[i] == 0) king++;
			else{
				if (nums[i] == nums[i + 1]) return false;
				if (nums[i + 1] - nums[i] == 1) continue;
				else lose += (nums[i + 1] - nums[i] - 1);
			}
		}
		return king >= lose;
	}
};