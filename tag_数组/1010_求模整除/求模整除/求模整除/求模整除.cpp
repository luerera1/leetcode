class Solution {
public:
	int numPairsDivisibleBy60(vector<int>& time) {
		unordered_map<int, int> m;
		int ret = 0;
		for (int i = 0; i<time.size(); i++){
			int t = time[i] % 60;
			if (t){
				if (m[60 - t]){
					ret += m[60 - t];
				}
			}
			else
				ret += m[t];
			m[t]++;
		}
		return ret;
	}
};