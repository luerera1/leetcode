#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector<vector<int>> nums(n, vector<int>(m, 0));
	for (int i = 0; i<n; i++){
		for (int j = 0; j<m; j++){
			cin >> nums[i][j];
		}
	}
	queue<pair<int, int>> q;
	vector<vector<int>> dxy = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };
	vector<vector<bool>> vis(n, vector<bool>(m, true));
	q.push({ 0, 0 });
	int res = 0;
	while (!q.empty()){
		auto a = q.front();
		q.pop();
		for (auto &iter : dxy){
			int x = a.first + iter[0];
			int y = a.second + iter[1];
			int ans = 0;
			if (x >= 0 && x<n && y >= 0 && y>m
				&& nums[x][y]>nums[a.first][a.second] && vis[x][y] == true){
				ans++;
				q.push(make_pair(x, y));
				vis[x][y] = false;
			}
			res = max(res, ans);
		}
	}
	cout << res << endl;
	return 0;
}