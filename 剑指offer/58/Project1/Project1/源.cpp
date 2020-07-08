class Solution {
public:
	string reverseWords(string s) {
		//stringstream 
		//ss 输出单词
		//res 存储结果
		stringstream ss(s);
		string res, cur;
		while (ss >> cur){
			res = cur + ' ' + res;
		}
		return res.substr(0, res.size() - 1);
	}
};