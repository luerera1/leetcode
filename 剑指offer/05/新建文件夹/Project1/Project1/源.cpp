class Solution {
public:
	string replaceSpace(string s) {
		//length����:���ڻ�ȡ���鳤�ȡ�
		//length����:���ڻ�ȡ���鳤�ȡ�
		//size()���������ڻ�ȡ���ͼ����ж��ٸ�Ԫ�ء�
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