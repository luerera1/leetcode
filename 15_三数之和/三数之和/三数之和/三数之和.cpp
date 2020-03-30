class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> res;
		int size = nums.size();
		sort(nums.begin(), nums.end());
		if (size<3)
			return res;
		for (int k = 0; k<size - 2; k++){
			int i = k + 1;
			int j = size - 1;
			if (nums[k]>0)
				break;
			if (k>0 && nums[k] == nums[k - 1]) continue;
			while (i<j){
				if (nums[i] + nums[k] + nums[j]<0){
					i++;
				}
				else if (nums[i] + nums[j] + nums[k]>0){
					j--;
				}
				else if (nums[i] + nums[j] + nums[k] == 0){
					res.push_back({ nums[i], nums[j], nums[k] });
					i++;
					j--;
					while (i<j && nums[i] == nums[i - 1]){
						i++;
					}
					while (i<j && nums[j] == nums[j + 1]){
						j--;
					}
				}
			}
		}
		return res;
	}
};
