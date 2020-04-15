class Solution {
public:
	vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
		int M = matrix.size();
		int N = matrix[0].size();
		vector<vector<int>> dist(M, vector<int>(N));
		vector<vector<int>> seen(M, vector<int>(N));
		queue<pair<int, int>> q;
		// 将所有的 0 添加进初始队列中
		for (int i = 0; i<M; ++i){
			for (int j = 0; j<N; ++j){
				if (matrix[i][j] == 0){
					q.emplace(i, j);
					seen[i][j] = 1;
				}
			}
		}
		constexpr int  dirs[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
		while (!q.empty()) {
			auto[i, j] = q.front();
			q.pop();
			for (int d = 0; d < 4; ++d) {
				int ni = i + dirs[d][0];
				int nj = j + dirs[d][1];
				if (ni >= 0 && ni < M && nj >= 0 && nj < N && !seen[ni][nj]) {
					dist[ni][nj] = dist[i][j] + 1;
					q.emplace(ni, nj);
					seen[ni][nj] = 1;
				}
			}
		}

		return dist;
	}
};

