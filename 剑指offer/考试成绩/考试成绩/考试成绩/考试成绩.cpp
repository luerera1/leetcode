#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector<string> str(n);
	vector<int> score(m);
	for (int i = 0; i<n; i++){
		cin >> str[i];
	}
	for (int j = 0; j<m; j++){
		cin >> score[j];
	}
	long long ret = 0;
	for (int i = 0; i < m; i++)
	{
		vector<int>tmp(26);
		for (int j = 0; j < n; j++)
			tmp[str[j][i] - 'A']++;
		ret += *max_element(tmp.begin(), tmp.end()) * score[i];
	}
	cout << ret;
	return 0;
}