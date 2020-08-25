#include<iostream>
#include<algorithm>
using namespace std;

void arrange(int*arr, int n){
	sort(arr, arr + n, greater<int>());  //降序
	long long n_sum = 0, ans = 0;
	for (int i = 0; i<n; i++)
		n_sum += arr[i];
	int dp[2][n_sum + 1]; // dp[0]表示在arr[i]之前的商品,放置方案数量，dp[1]表示加入商品arr[i]后，方案数量
	dp[0][0] = 1; // 0个商品，总价值数为0的方案数量为1
	for (int j = 1; j <= n_sum; dp[0][j] = 0, j++); // 0个商品，总价值数为j(j>=1)的方案数量为0  
	for (int i = 0; i<n; i++){
		for (int j = 1; j<n_sum; j++){
			dp[1][j] = dp[0][j]; // 未加入商品价值arr[i]
			if (j - arr[i] >= 0){
				dp[1][j] += dp[0][j - arr[i]]; // 加入商品价值arr[i]
				if (j>n_sum - j && j - arr[i]<n_sum - j + arr[i])
					ans += dp[0][j - arr[i]]; //满足条件1,2,3，则修改计数ans
			}
		}
		for (int j = 1; j<n_sum; dp[0][j] = dp[1][j], j++);//更新dp[0]
	}
	cout << ans << endl;
}
int main(){
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i<n; i++)
		cin >> arr[i];
	arrange(arr, n);
	return 0;
}