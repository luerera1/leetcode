class Solution {
public:
	void gameOfLife(vector<vector<int>>& board) {
		int x;
		int len1 = board.size();
		int len2 = board[0].size();
		if (len1 == 0) return;
		int tx[8] = { 1, -1, 0, 0, 1, 1, -1, -1 };
		int ty[8] = { 0, 0, 1, -1, -1, 1, -1, 1 };
		for (int i = 0; i<len1; i++){
			for (int j = 0; j<len2; j++){
				x = 0;
				for (int k = 0; k<8; k++){
					if (i + tx[k] >= 0 && i + tx[k]<len1 && j + ty[k] >= 0 && j + ty[k]<len2 && board[i + tx[k]][j + ty[k]]>0)//判断是否越界且大于0
						x++;
				}
				if (board[i][j] == 0 && x == 3)
					board[i][j] = -1;//死亡变存活，但当前还是死亡(-1<=0)
				else if (board[i][j] == 1 && (x<2 || x>3))
					board[i][j] = 2;//存活变死亡，但当前还是存活(2>0)

			}
		}
		for (int i = 0; i<len1; i++)
		for (int j = 0; j<len2; j++)
		if (board[i][j] == -1) board[i][j] = 1;
		else if (board[i][j] == 2) board[i][j] = 0;

	}
};