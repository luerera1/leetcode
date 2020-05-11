class Solution {
public:
	bool judgeSquareSum(int c) {
		long long int i = 0;
		long long int j = sqrt(c);
		while (i <= j){
			int sum = i*i + j*j;
			if (sum<c){
				i++;
			}
			else if (sum>c){
				j--;
			}
			else{
				return true;
			}
		}
		return false;
	}
};