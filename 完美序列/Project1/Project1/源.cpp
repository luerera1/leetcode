#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i<n; i++){
			cin >> a[i];
		}
		int start = 1;
		int sum = a[0];
		int res = 0;
		for (int i = 1; i<n; i++){
			if (sum <= a[i]){
				sum += a[i];
				res = max(res, i - start + 1);
			}
			else{
				start = i;
				sum = a[i];
			}
		}
		cout << res << endl;
	}
	return 0;
}
