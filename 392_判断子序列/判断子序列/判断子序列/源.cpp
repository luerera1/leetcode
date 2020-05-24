class Solution {
public:
	bool isSubsequence(string s, string t) {
		int i = 0, j = 0;
		int len = t.size();
		if (!s.size() && !t.size()) return true;
		while (j<len){
			if (s[i] == t[j]){
				i++;
				j++;
			}
			else{
				j++;
			}
			if (i == s.size()){
				return true;
			}
		}
		return false;
	}
};