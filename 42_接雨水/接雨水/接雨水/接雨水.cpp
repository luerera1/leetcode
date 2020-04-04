class Solution {
public:
	int trap(vector<int>& height) {
		if (height.size() == 0)
			return 0;
		int res = 0;
		int size = height.size();
		int left = 0;
		int right = size - 1;
		int maxleft = height[0];
		int maxright = height[size - 1];
		while (left <= right){
			maxleft = max(height[left], maxleft);
			maxright = max(height[right], maxright);
			if (maxleft < maxright){
				res += maxleft - height[left];
				left++;
			}
			else{
				res += maxright - height[right];
				right--;
			}
		}
		return res;
	}
};