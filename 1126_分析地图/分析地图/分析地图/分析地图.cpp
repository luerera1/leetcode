class Solution {
public:
	int maxDistance(vector<vector<int>>& grid) {
		deque<pair<int, int>> deq;
		int M = grid.size();
		int N = grid[0].size();
		for (int i = 0; i<M; i++){
			for (int j = 0; j<N; j++){
				if (grid[i][j] == 1){
					deq.push_back({ i, j });
				}
			}
		}

		if (deq.size() == 0 || deq.size() == N*M){
			return -1;
		}
		int d = -1;
		vector<vector<int>> dxy = { { 0, 1 }, { 0, -1 }, { 1, 0 }, { -1, 0 } };
		while (deq.size() != 0){
			d++;
			int size = deq.size();
			while (size--){
				auto cur = deq.front();
				deq.pop_front();
				for (auto& e : dxy){
					int x = cur.first + e[0];
					int y = cur.second + e[1];
					if (x<0 || x >= M || y<0 || y >= N || grid[x][y] != 0){
						continue;
					}
					grid[x][y] = 2;
					deq.push_back({ x, y });
				}
			}
		}
		return d;
	}
};