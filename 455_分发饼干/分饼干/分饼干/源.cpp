class Solution {
public:
	int findContentChildren(vector<int>& g, vector<int>& s) {
		int res = 0;
		sort(g.begin(), g.end());
		sort(s.begin(), s.end());
		int i = 0, j = 0;
		for (int i = 0; i<s.size(); i++){
			if (s[i] >= g[j]){
				res++;
				j++;
				if (j >= g.size()) break;
			}
		}
		return res;
	}
};