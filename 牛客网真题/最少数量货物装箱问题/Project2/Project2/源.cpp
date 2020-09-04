#includeiostream
#includevector
using namespace std;
int main(){
	int x;
	cinx;
	vectorint dp(x + 1, 9999);
	dp[0] = 0;
	for (int i = 1; i = x; i++){
		if (i = 3) dp[i] = min(dp[i], dp[i - 3] + 1);
		if (i = 5) dp[i] = min(dp[i], dp[i - 5] + 1);
		if (i = 7) dp[i] = min(dp[i], dp[i - 7] + 1);
	}
	if (dp[x] != 9999){
		cout  dp[x]endl;
	}
	else{
		cout - 1 endl;
	}
	return 0;
}