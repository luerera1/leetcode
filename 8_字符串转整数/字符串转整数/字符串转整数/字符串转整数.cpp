class Solution {
public:
	int myAtoi(string str) {
		bool start = false;
		int flag = 1;
		long res = 0;
		for (int i = 0; i<str.size(); i++){
			if (str[i] == ' ' && start == false){
				continue;
			}
			if (str[i] == '-' && start == false){
				flag = -1;
				start = true;
				continue;
			}
			if (str[i] == '+' && start == false){
				flag = 1;
				start = true;
				continue;
			}
			if (str[i] >= '0' && str[i] <= '9'){
				start = true;
				res = res * 10 + str[i] - 48;
				if (res*flag>INT_MAX){
					return INT_MAX;
				}
				if (res*flag<INT_MIN){
					return INT_MIN;
				}
			}
			else{
				break;
			}
		}
		return flag*res;
	}
};