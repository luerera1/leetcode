#include<iostream>
#include<string>
#include<vector>
using namespace std;
void dfs(string s, int cur, string& tmp, vector<string>& ans)
{
	if (cur == s.size())
	{
		ans.push_back(tmp);
		return;
	}
	// 当前遇到0 返回
	if (s[cur] == '0') return;
	// 单字符破译
	tmp.push_back('a' + s[cur] - '0' - 1);
	dfs(s, cur + 1, tmp, ans);
	tmp.pop_back();
	if (cur + 1<s.size())
	{
		int idx = (s[cur] - '0') * 10 + s[cur + 1] - '0';
		// 双字符组合破译
		if (idx <= 26)
		{
			tmp.push_back('a' + idx - 1);
			dfs(s, cur + 2, tmp, ans);
			tmp.pop_back();
		}
	}
}
int main()
{
	string s;
	while (cin >> s)
	{
		string tmp = "";
		vector<string>v;
		dfs(s, 0, tmp, v);
		for (auto t : v)
			cout << t << " ";
		cout << endl;
	}
	return 0;
}