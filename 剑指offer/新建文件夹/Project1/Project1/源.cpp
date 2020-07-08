class Solution {
public:
	vector<vector<int>> findContinuousSequence(int target) {
		vector<vector<int>> res;
		int i = 1, j = 1, sum = 0;
		while (i <= target / 2){
			if (sum<target){
				sum += j;
				j++;
			}
			else if (sum>target){
				sum -= i;
				i++;
			}
			else{
				vector<int> arr;
				for (int k = i; k < j; k++) {
					arr.push_back(k);
				}
				res.push_back(arr);
				sum -= i;
				i++;
			}
		}
		return res;
	}
};