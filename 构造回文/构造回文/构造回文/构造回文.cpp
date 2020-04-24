#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
const int Max = 1001;
int dp[Max][Max];
int str(string s1, string s2){
	int len1 = s1.size();
	int len2 = s2.size();
	for (int i = 0; i<len1; i++){
		dp[i][0] = 0;
	}
	for (int j = 0; j<len2; j++){
		dp[0][j] = 0;
	}
	for (int i = 1; i <= len1; i++){
		for (int j = 1; j <= len2; j++){
			if (s1[i - 1] == s2[j - 1]){
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else{
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}
	return dp[len1][len2];
}
int main(){
	string s;
	while (cin >> s){
		int length = s.size();
		if (length == 1){
			cout << 1 << endl;
			continue;
		}
		string s1 = s;
		reverse(s1.begin(), s1.end());
		int ans = str(s, s1);
		cout << length - ans << endl;
	}
	return 0;

}