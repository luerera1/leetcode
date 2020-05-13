class Solution {
public:
	int smallestDifference(vector<int>& a, vector<int>& b) {
		long ans = INT_MAX;
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for (int i = 0, j = 0; i<a.size() && j<b.size();){
			ans = min(ans, abs(long(a[i]) - long(b[j])));
			if (a[i]<b[j]){
				i++;
			}
			else{
				j++;
			}
		}
		return ans;
	}
};