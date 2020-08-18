#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	int sum = 0;
	int mul = 1;
	for (int i = 0; i<n; i++){
		cin >> nums[i];
		sum += nums[i];
		mul *= nums[i];
	}
	int res = sum;
	int ans = 1;
	for (int i = 0; i<n; i++){
		sum -= nums[i];
		if (sum>mul){
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}