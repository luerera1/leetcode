class Solution {
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.empty()) return 0;
		int k = 1, c = 1;
		for (int i = 1; i<nums.size(); i++){
			if (nums[i] == nums[i - 1]){
				c++;
			}
			else{
				c = 1;
			}
			if (c <= 2){
				nums[k++] = nums[i];
			}
		}
		return k;
	}
};