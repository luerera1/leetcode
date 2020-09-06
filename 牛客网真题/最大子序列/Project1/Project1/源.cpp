#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string MaxSubString(string& str)
{
	string strRet;
	strRet.push_back(str[str.size() - 1]);
	char c = str[str.size() - 1];
	for (int i = str.size() - 2; i >= 0; --i)
	{
		if (str[i] >= c)
		{
			c = str[i];
			strRet.push_back(str[i]);
		}
	}
	reverse(strRet.begin(), strRet.end());
	return strRet;
}

int main()
{
	string str;
	cin >> str;
	cout << MaxSubString(str) << endl;
	return 0;
}