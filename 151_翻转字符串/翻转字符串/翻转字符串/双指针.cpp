class Solution {
public:
	string reverseWords(string s) {
		string sub = "";
		string ans = "";
		vector<string> str;
		for (int i = 0; i<s.size(); i++){
			if (s[i] == ' '){
				if (sub.size()>0){
					str.push_back(sub);
					sub = "";
				}
			}
			else{
				sub += s[i];
				if (i == s.size() - 1)
					str.push_back(sub);
			}
		}
		for (int i = str.size() - 1; i >= 0; i--){
			ans += str[i];
			if (i>0)
				ans += " ";
		}
		return ans;
	}
};


