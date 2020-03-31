class Solution {
public:
	vector<int> sortArray(vector<int>& nums) {
		QuickSort(nums, 0, nums.size() - 1);
		return nums;
	}
	void QuickSort(vector<int>& nums, int l, int r) {
		if (l < r)
		{
			int mid = partition(nums, l, r);
			QuickSort(nums, l, mid - 1);//注意点，l和r的值自己写错
			QuickSort(nums, mid + 1, r);//注意点,l和r的值自己写错
		}
	}
	int partition(vector<int>& nums, int l, int r)
	{
		int temp = nums[l];
		while (l<r){
			while (l<r){
				if (nums[r]>temp){
					r--;
				}
				else{
					nums[l] = nums[r];
					l++;
					break;
				}
			}
			while (l<r){
				if (nums[l]<temp){
					l++;
				}
				else{
					nums[r] = nums[l];
					r--;
					break;
				}
			}

		}
		nums[l] = temp;
		return l;
	}
};