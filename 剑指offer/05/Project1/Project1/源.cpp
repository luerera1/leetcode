class Solution {
public:
	string replaceSpace(string s) {
		string str = "%20";
		string s1;
		for (int i = 0; i<s.size(); i++){
			if (s[i] != ' '){
				s1 += s[i];
			}
			else{
				s1 += str;
			}
		}
		return s1;
	}
};