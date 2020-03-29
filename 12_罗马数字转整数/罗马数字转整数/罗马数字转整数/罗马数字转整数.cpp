class Solution {
public:
	string intToRoman(int num) {
		string s;
		vector<int> value = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
		vector<string> strs = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
		int size = int(value.size());
		for (int i = 0; i<size; i++){
			while (num >= value[i]){
				s.append(strs[i]);
				num -= value[i];
			}
		}
		return s;
	}
};