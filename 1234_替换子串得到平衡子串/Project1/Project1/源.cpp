class Solution {
public:
	int balancedString(string s) {
		int n = s.size();
		int sum = n;
		int m = n / 4;
		int count[26]{0};
		for (auto item : s){
			count[item - 'A']++;
		}
		int r = 0, l = 0;
		while (r<n){
			count[s[r] - 'A']--;
			while (l<n&&count['Q' - 'A'] <= m&&count['W' - 'A'] <= m&&count['E' - 'A'] <= m&&count['R' - 'A'] <= m){
				sum = min(sum, r - l + 1);//更新最短长度
				count[s[l] - 'A']++;//尝试缩小窗口
				l++;
			}
			r++;
		}
		return sum;
	}
};