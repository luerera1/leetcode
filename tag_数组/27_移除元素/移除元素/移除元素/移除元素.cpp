class Solution {
public:
	int removeElement(vector<int>& nums, int val) {
		int ans = nums.size();
		for (int i = 0; i<ans;){
			if (nums[i] == val){
				nums[i] = nums[ans - 1];
				ans--;
			}
			else{
				i++;
			}
		}
		return ans;
	}
};