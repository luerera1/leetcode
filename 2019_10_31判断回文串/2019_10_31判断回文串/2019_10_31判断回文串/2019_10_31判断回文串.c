class Solution {
public:
	bool isPalindrome(int x) {
		int p = 0, q = 0, count = 1;
		int R = 0;
		if (x<0){
			return false;
		}
		while (x / count >= 10) {
			count *= 10;
		}
		while (x>0){
			p = x / count;
			q = x % 10;
			x = (x%count) / 10;
			count /= 100;

			if (p != q)
			{
				return false;
			}
		}
		return true;
	}
};