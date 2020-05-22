class Solution {
public:
	vector<int> smallestK(vector<int>& arr, int k) {
		if (k == arr.size())
			return arr;
		vector<int> a;
		a.clear();
		sort(arr.begin(), arr.end());
		for (int i = 0; i<k; i++)
			a.push_back(arr[i]);
		return a;
	}
};
