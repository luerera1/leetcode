class Solution {
public:
	bool is_ok(char c){
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			return true;
		return false;
	}
	string reverseVowels(string s) {
		int i = 0, j = s.size() - 1;
		while (i <= j){
			if (!is_ok(s[i])){
				i++;
				continue;
			}
			if (!is_ok(s[j])){
				j--;
				continue;
			}
			swap(s[i++], s[j--]);
		}
		return s;
	}
};