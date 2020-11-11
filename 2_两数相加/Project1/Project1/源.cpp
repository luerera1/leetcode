class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		int res = 0;
		int left = -1;
		unordered_map<int, int> m;
		for (int i = 0; i<s.size(); i++){
			if (m.count(s[i]) && m[s[i]]>left){
				left = m[s[i]];
			}
			m[s[i]] = i;
			res = max(res, i - left);
		}
		return res;
	}
};