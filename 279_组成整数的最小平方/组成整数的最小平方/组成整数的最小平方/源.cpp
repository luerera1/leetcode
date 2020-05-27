class Solution
{
public:
	/*����С��n��ƽ������: 1, 4, 9...*/
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
		vector<bool> visited(n + 1);    //��¼�ѷ��ʹ��Ľڵ�
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
				/*ÿ�ο�Խ�ļ��Ϊƽ����*/
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
