#include <iostream>
#include <vector>
#include <utility>
#include <cstdlib>
#include <cstring>
#include <queue>

using namespace std;
struct Point{
	int x, y, s;
};
char maze[55][55];
int bfs(int x0, int y0, int n, int m, vector<pair<int, int>>& strips){
	maze[x0][y0] = 'X';
	queue<Point> q;
	q.push({ x0, y0, 0 });

	int ans = -1;
	while (!q.empty()){
		auto a = q.front();
		q.pop();
		for (auto& iter : strips){
			int x = a.x + iter.first;
			int y = a.y + iter.second;
			if (x<n && x >= 0 && y<m && y >= 0 && maze[x][y] == '.'){
				ans = max(ans, a.s + 1);
				maze[x][y] = 'X';
				q.push({ x, y, a.s + 1 });
			}
		}
	}
	for (int i = 0; i<n; i++)
	for (int j = 0; j<m; j++){
		if (maze[i][j] == '.'){
			ans = -1;
			break;
		}
	}
	return ans;
}
int main(){
	int n, m, x0, y0, k;
	cin >> n >> m;
	for (int i = 0; i<n; i++)
	for (int j = 0; j<m; j++)
		cin >> maze[i][j];
	cin >> x0 >> y0 >> k;
	vector<pair<int, int>> strips(k);
	for (int i = 0; i<k; i++) cin >> strips[i].first >> strips[i].second;
	cout << bfs(x0, y0, n, m, strips) << endl;
	return 0;
}