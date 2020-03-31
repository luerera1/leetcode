class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> res;
		int _size = nums.size();
		sort(nums.begin(), nums.end());
		for (int a = 0; a <= _size - 4; a++){
			if (a>0 && nums[a] == nums[a - 1]) continue;      //确保nums[a] 改变了
			for (int b = a + 1; b <= _size - 3; b++){
				if (b>a + 1 && nums[b] == nums[b - 1])continue;   //确保nums[b] 改变了
				int  c = b + 1, d = _size - 1;
				while (c<d){
					if (nums[a] + nums[b] + nums[c] + nums[d]<target)
						c++;
					else if (nums[a] + nums[b] + nums[c] + nums[d]>target)
						d--;
					else{
						res.push_back({ nums[a], nums[b], nums[c], nums[d] });
						while (c<d&&nums[c + 1] == nums[c])      //确保nums[c] 改变了
							c++;
						while (c<d&&nums[d - 1] == nums[d])      //确保nums[d] 改变了
							d--;
						c++;
						d--;
					}
				}
			}
		}
		return res;
	}
};