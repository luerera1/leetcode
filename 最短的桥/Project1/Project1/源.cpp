class Solution {
public:
	int shortestBridge(vector<vector<int>>& A) {
		int res = 0, n = A.size(), startX = -1, startY = -1;
		queue<int> q;
		vector<int> dirX{ -1, 0, 1, 0 }, dirY = { 0, 1, 0, -1 };
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (A[i][j] == 0) continue;
				startX = i; startY = j;
				break;
			}
			if (startX != -1) break;
		}
		helper(A, startX, startY, q);
		while (!q.empty()) {
			for (int i = q.size(); i > 0; --i) {
				int t = q.front(); q.pop();
				for (int k = 0; k < 4; ++k) {
					int x = t / n + dirX[k], y = t % n + dirY[k];
					if (x < 0 || x >= n || y < 0 || y >= n || A[x][y] == 2) continue;
					if (A[x][y] == 1) return res;
					A[x][y] = 2;
					q.push(x * n + y);
				}
			}
			++res;
		}
		return res;
	}
	void helper(vector<vector<int>>& A, int x, int y, queue<int>& q) {
		int n = A.size();
		if (x < 0 || x >= n || y < 0 || y >= n || A[x][y] == 0 || A[x][y] == 2) return;
		A[x][y] = 2;
		q.push(x * n + y);
		helper(A, x + 1, y, q);
		helper(A, x, y + 1, q);
		helper(A, x - 1, y, q);
		helper(A, x, y - 1, q);
	}
};