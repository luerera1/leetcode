#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
	int n, s;
	cin >> n >> s;
	int nums[55];
	for (int i = 1; i <= n; i++){
		cin >> nums[i];
	}
	sort(nums + 1, nums + n + 1);
	int dis = nums[n] - nums[1];
	for (int i = 1; i<n; i++){
		int min_ = INT_MAX;
		int max_ = INT_MIN;
		for (int j = 1; j <= i; j++){
			min_ = min(min_, nums[j] + s);
			max_ = max(max_, nums[j] + s);
		}
		for (int k = i + 1; k <= n; k++){
			min_ = min(min_, nums[k] - s);
			max_ = max(max_, nums[k] - s);
		}
		dis = min(dis, max_ - min_);
	}
	cout << dis << endl;
	return 0;
}