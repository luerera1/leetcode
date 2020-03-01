class Solution {
public:
	string convert(string s, int numRows) {
		if (numRows == 1)
			return s;
		vector<string> store(numRows);
		int sSize = int(s.size());
		int storesize = min(sSize, numRows);
		int loc = 0;
		bool change = false;
		for (int index = 0; index<sSize; index++){
			store[loc].push_back(s[index]);
			if (loc == numRows - 1 || loc == 0){
				change = !change;
			}
			loc += change ? 1 : -1;
		}
		string res;
		for (int i = 0; i<storesize; i++){
			res += store[i];
		}
		return res;
	}
};