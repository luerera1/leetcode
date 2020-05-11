class Solution {
public:
	vector<int> twoSum(vector<int>& numbers, int target) {
		vector<int> v;
		int size = numbers.size();
		int i = 0, j = size - 1;
		while (i<j){
			int sum = numbers[i] + numbers[j];
			if (sum<target){
				i++;
			}
			else if (sum>target){
				j--;
			}
			else{
				return{ i + 1, j + 1 };
			}
		}
		return{ -1, -1 };
	}
};