class Solution
{
public:
	/*返回小于n的平方序列: 1, 4, 9...*/
	vector<int> getSquares(int n)
	{
		vector<int> res;
		for (int i = 1; i*i <= n; ++i)
		{
			res.push_back(i*i);
		}
		return res;
	}
	int numSquares(int n)
	{
		vector<int> squares = getSquares(n);
		vector<bool> visited(n + 1);    //记录已访问过的节点
		queue<int> q;

		q.push(n);
		int res = 0;
		visited[n] = true;
		while (!q.empty())
		{
			int size = q.size();
			res++;
			while (size--)
			{
				int curr = q.front();
				q.pop();
				/*每次跨越的间隔为平方数*/
				for (int num : squares)
				{
					int next = curr - num;
					if (next < 0)
					{
						break;
					}
					if (next == 0)
					{
						return res;
					}
					if (visited[next])
					{
						continue;
					}
					visited[next] = true;
					q.push(next);
				}
			}
		}
		return n;
	}
};
