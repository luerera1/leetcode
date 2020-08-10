
class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
		int n = matrix.size();
		if (!n) return{};
		int m = matrix[0].size();
		vector<int> res;
		vector<vector<bool>> vis(n, vector<bool>(m, false));
		int dx[] = { 0, 1, 0, -1 }, dy[] = { 1, 0, -1, 0 };

		for (int x = 0, y = 0, d = 0, k = 1; k <= n*m; k++){
			vis[x][y] = true;
			res.push_back(matrix[x][y]);
			int a = dx[d] + x, b = dy[d] + y;
			if (a<0 || b<0 || a >= n || b >= m || vis[a][b]){
				d = (d + 1) % 4;
				a = dx[d] + x, b = dy[d] + y;
			}
			x = a, y = b;
		}
		return res;
	}
};
