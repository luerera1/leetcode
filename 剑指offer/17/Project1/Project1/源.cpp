
class Solution {
public:
	vector<int> printNumbers(int n) {
		vector<int> r;
		if (n == 0) return r;
		//打印到数组中
		for (int i = 1, max = pow(10, n); i<max; i++)
		{
			r.push_back(i);
		}
		return r;
	}
};


