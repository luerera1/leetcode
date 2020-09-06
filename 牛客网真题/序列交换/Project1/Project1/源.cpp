#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	long int a[n];
	int count = 0;
	for (int i = 0; i<n; i++){
		cin >> a[i];
		if (a[i] % 2 == 1) count++;
	}
	if (count == 0 || count == n){
		for (int i = 0; i<n - 1; i++)
			cout << a[i] << " ";
		cout << a[n - 1] << endl;
	}
	else{
		sort(a, a + n);
		for (int i = 0; i<n - 1; i++){
			cout << a[i] << " ";
		}
		cout << a[n - 1] << endl;
	}
	return 0;
}