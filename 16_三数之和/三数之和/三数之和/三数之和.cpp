class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		int sum = nums[0] + nums[1] + nums[2];
		for (int k = 0; k<nums.size(); k++){
			int i = k + 1;
			int j = nums.size() - 1;
			while (i<j){
				int res = nums[i] + nums[j] + nums[k];
				if (abs(target - res)<abs(target - sum))
					sum = res;
				if (res>target){
					j--;
				}
				else if (res == target){
					return res;
				}
				else{
					i++;
				}
			}
		}
		return sum;
	}
};
