class Solution {
public:
	string replaceSpace(string s) {
		//length属性:用于获取数组长度。
		//length属性:用于获取数组长度。
		//size()方法：用于获取泛型集合有多少个元素。
		int orginalLength = s.size() - 1;
		int numberOfBlank = 0;
		for (auto c : s){
			if (c == ' ') ++numberOfBlank;
		}

		int newLength = orginalLength + numberOfBlank * 2;
		s += string(numberOfBlank * 2, ' ');
		int indexOriginal = orginalLength;
		int indexNew = newLength;
		while (indexOriginal >= 0 && indexNew > indexOriginal){
			if (s[indexOriginal] == ' '){
				s[indexNew--] = '0';
				s[indexNew--] = '2';
				s[indexNew--] = '%';
			}
			else{
				s[indexNew--] = s[indexOriginal];
			}
			--indexOriginal;
		}
		return s;
	}
};