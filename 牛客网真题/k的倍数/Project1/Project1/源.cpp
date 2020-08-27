#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
	long long n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i<n; i++){
		cin >> nums[i];
	}
	long long k;
	cin >> k;
	int res = 0, ans = 0;
	for (int i = 0; i<n; i++){
		int sum = nums[i];
		int ans = 1;
		for (int j = i + 1; j<n; j++){
			sum += nums[j];
			if (sum%k == 0){
				ans = j - i + 1;
			}
		}
		res = max(res, ans);
	}
	cout << res << endl;
	return 0;
}