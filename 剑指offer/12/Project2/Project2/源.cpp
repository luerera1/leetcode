class Solution {
public:
	bool exist(vector<vector<char>>& board, string word) {
		if (board.size() == 0)
			return false;
		for (int i = 0; i<board.size(); i++){
			for (int j = 0; j<board[0].size(); j++){
				if (dfs(board, i, j, 0, word)){
					return true;
				}
			}
		}
		return false;
	}
	bool dfs(vector<vector<char>>& board, int i, int j, int length, string word){
		if (i >= board.size() || j >= board[0].size() || i<0 || j<0 || word[length] != board[i][j] || length>word.size()){
			return false;
		}
		if (length == word.size() - 1 && word[length] == board[i][j]){
			return true;
		}
		char temp = board[i][j];
		board[i][j] = '0';
		bool flag = dfs(board, i + 1, j, length + 1, word)
			|| dfs(board, i - 1, j, length + 1, word)
			|| dfs(board, i, j + 1, length + 1, word)
			|| dfs(board, i, j - 1, length + 1, word);
		board[i][j] = temp;
		return flag;
	}
};