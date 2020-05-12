class Solution {
public:
	bool validPalindrome(string s) {
		int i = 0;
		int j = s.size() - 1;
		while (i<j){
			if (s[i] != s[j]){
				return is_valid(s, i + 1, j) || is_valid(s, i, j - 1);
			}
			i++;
			j--;
		}
		return true;
	}
	bool is_valid(string s, int start, int end){
		while (start<end){
			if (s[start] != s[end]){
				return false;
			}
			start++;
			end--;
		}
		return true;
	}
};