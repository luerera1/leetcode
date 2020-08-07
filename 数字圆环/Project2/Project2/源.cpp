#include<iostream>
#include<algorithm>

using namespace std;
int main(){
	int t;
	cin >> t;
	while (t>0){
		long long n;
		cin >> n;
		if (n <= 2)
			cout << "NO" << endl;
		else{
			long long a[n];
			for (int i = 0; i<n; i++){
				cin >> a[i];
			}
			sort(a, a + n);
			if (a[n - 2] + a[n - 3]>a[n - 1])
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		t--;
	}
	return 0;
}