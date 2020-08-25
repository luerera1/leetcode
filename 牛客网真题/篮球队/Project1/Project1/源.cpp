#include<iostream>
#include<algorithm>
using namespace std;

void arrange(int*arr, int n){
	sort(arr, arr + n, greater<int>());  //����
	long long n_sum = 0, ans = 0;
	for (int i = 0; i<n; i++)
		n_sum += arr[i];
	int dp[2][n_sum + 1]; // dp[0]��ʾ��arr[i]֮ǰ����Ʒ,���÷���������dp[1]��ʾ������Ʒarr[i]�󣬷�������
	dp[0][0] = 1; // 0����Ʒ���ܼ�ֵ��Ϊ0�ķ�������Ϊ1
	for (int j = 1; j <= n_sum; dp[0][j] = 0, j++); // 0����Ʒ���ܼ�ֵ��Ϊj(j>=1)�ķ�������Ϊ0  
	for (int i = 0; i<n; i++){
		for (int j = 1; j<n_sum; j++){
			dp[1][j] = dp[0][j]; // δ������Ʒ��ֵarr[i]
			if (j - arr[i] >= 0){
				dp[1][j] += dp[0][j - arr[i]]; // ������Ʒ��ֵarr[i]
				if (j>n_sum - j && j - arr[i]<n_sum - j + arr[i])
					ans += dp[0][j - arr[i]]; //��������1,2,3�����޸ļ���ans
			}
		}
		for (int j = 1; j<n_sum; dp[0][j] = dp[1][j], j++);//����dp[0]
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