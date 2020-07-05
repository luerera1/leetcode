class Solution {
public:
	vector<int> getLeastNumbers(vector<int>& arr, int k) {
		sort(arr.begin(), arr.end());
		vector<int> res;
		int i = 0;
		while (k--){
			res.push_back(arr[i]);
			i++;
		}
		return res;
	}
};