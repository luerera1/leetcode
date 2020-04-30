class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		auto newm = matrix;
		int N = matrix.size();
		for (int i = 0; i<N; i++){
			for (int j = 0; j<N; j++){
				newm[j][N - i - 1] = matrix[i][j];
			}
		}
		matrix = newm;
	}
};