class Solution {
public:
	bool wordPattern(string pattern, string str) {
		vector<string> lis1;
		int pos;
		int i = 0;
		while (pos != -1)//读取str中的单词
		{
			pos = str.find_first_of(' ', i);
			string temp = str.substr(i, pos - i);
			lis1.push_back(temp);
			i = pos + 1;
		}
		if (pattern.size() != lis1.size()) return false;
		map<char, string> h;
		for (int i = 0; i<lis1.size(); i++)
		{
			if (h.count(pattern[i]))
			{
				if (h[pattern[i]] != lis1[i])
					return false;
			}
			else
			{
				h.insert(map<char, string>::value_type(pattern[i], lis1[i]));
			}
		}
		set<char> p(pattern.begin(), pattern.end());
		set<string> l(lis1.begin(), lis1.end());
		if (p.size() != l.size())
			return false;
		return true;
	}
};
