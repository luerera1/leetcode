class Solution {
public:
	char firstUniqChar(string s) {
		if (!s.size())
			return ' ';
		unordered_map<int, int> m;
		for (int i = 0; i<s.size(); i++){
			m[s[i]]++;
		}
		for (int i = 0; i<s.size(); i++){
			if (m[s[i]] == 1)
				return s[i];
		}
		return ' ';
	}
};