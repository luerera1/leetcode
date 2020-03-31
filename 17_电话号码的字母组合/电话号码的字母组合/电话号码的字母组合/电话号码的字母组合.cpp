class Solution {
public:
	vector<string> letterCombinations(string digits) {
		vector<string> res;
		map<char, string> m = { { '2', "abc" }, { '3', "def" }, { '4', "ghi" }, { '5', "jkl" }, { '6', "mno" }, { '7', "pqrs" }, { '8', "tuv" }, { '9', "wxyz" } };
		queue<string> queue;
		for (int i = 0; i<m[digits[0]].size(); i++){
			string str;
			str.push_back(m[digits[0]][i]);
			queue.push(str);
		}
		string ss;
		for (int i = 1; i<digits.size(); i++){
			int l = queue.size();
			while (l--){
				for (int j = 0; j<m[digits[i]].size(); j++)                 {
					ss = queue.front();
					ss = ss + m[digits[i]][j];
					queue.push(ss);
				}
				queue.pop();
			}
		}
		while (!queue.empty()){
			res.push_back(queue.front());
			queue.pop();
		}
		return res;
	}
};