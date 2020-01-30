class Solution {
public:
	bool isValid(string s) {
		stack<char> p;
		for (int i = 0; i<s.size(); i++)
		{
			if (s[i] == '(' || s[i] == '{' || s[i] == '[')
				p.push(s[i]);
			else
			{
				if (p.empty())return false;
				if (s[i] == ')' && p.top() != '(')return false;
				if (s[i] == '}' && p.top() != '{')return false;
				if (s[i] == ']' && p.top() != '[')return false;
				p.pop();
			}
		}
		return p.empty();
	}
};