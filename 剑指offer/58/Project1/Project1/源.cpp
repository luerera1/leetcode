class Solution {
public:
	string reverseWords(string s) {
		//stringstream 
		//ss �������
		//res �洢���
		stringstream ss(s);
		string res, cur;
		while (ss >> cur){
			res = cur + ' ' + res;
		}
		return res.substr(0, res.size() - 1);
	}
};