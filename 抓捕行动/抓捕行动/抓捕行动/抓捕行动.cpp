#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long n, d;
	cin >> n >> d;
	long long a[n];
	long long count = 0;
	for (long long i = 0, j = 0; i<n; i++){
		cin >> a[i];
		while (i >= 2 && (a[i] - a[j]>d)){
			j++;
		}
		count += (i - j - 1)*(i - j) / 2;
	}
	cout << count % 99997867;
	return 0;
}