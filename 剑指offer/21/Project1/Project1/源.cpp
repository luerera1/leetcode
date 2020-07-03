class Solution {
public:
	vector<int> exchange(vector<int>& nums) {
		int n = nums.size();
		int i = 0, j = n - 1;
		while (i<j){
			if (nums[i] % 2 == 1){
				i++;
				continue;
			}
			if (nums[j] % 2 == 0){
				j--;
				continue;
			}
			if ((nums[i] % 2 == 0) && (nums[j] % 2) == 1){
				swap(nums[i], nums[j]);
				i++;
				j--;
			}
		}
		return nums;
	}
};