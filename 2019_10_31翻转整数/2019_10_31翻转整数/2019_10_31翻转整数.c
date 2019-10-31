class Solution {
public:
	int reverse(int x) {
		int64_t rev = 0;
		int pop = 0;
		if (x == INT_MAX){
			return 0;
		}
		if (x < 0){
			return -reverse(-x);
		}
		while (x>0){
			pop = x % 10;
			x /= 10;
			rev = rev * 10 + pop;
			if (rev > INT_MAX){
				return 0;
			}
		}
		return rev;
	}
};