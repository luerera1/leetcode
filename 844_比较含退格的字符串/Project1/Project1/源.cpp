class Solution {
public:
	bool backspaceCompare(string S, string T) {
		return helper(T) == helper(S);
	}
	string helper(string str){
		string res = "";
		char c;
		for (char c : str){
			if (c == '#'){
				if (!res.empty()) res.pop_back();
			}
			else{
				res.push_back(c);
			}
		}
		return res;
	}
};