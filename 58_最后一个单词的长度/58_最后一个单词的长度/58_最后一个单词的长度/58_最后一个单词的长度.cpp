class Solution {
public:
	int lengthOfLastWord(string s) {
		int left = 0, right = (int)s.size() - 1, res = 0;
		while (s[left] == ' ')
			left++;
		while (s[right] == ' ')
			right--;
		for (int i = left; i <= right; i++){
			if (s[i] == ' ')
				res = 0;
			else
				res++;
		}
		return res;
	}
};