#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i<n; i++){
		cin >> nums[i];
	}
	vector<int> res;
	for (int i = 0; i<n; i++){
		res.push_back(nums[i]);
		reverse(res.begin(), res.end());
	}
	for (int i = 0; i<n; i++){
		cout << res[i] << " ";
	}
	return 0;
}