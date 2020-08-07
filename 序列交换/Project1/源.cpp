#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	long int a[20];
	int odd_num = 0;
	for (int i = 0; i<n; i++) cin >> a[i];
	for (int i = 0; i<n; i++){
		if (a[i] & 1) odd_num += 1;
	}
	if (odd_num == 0 || odd_num == n){
		for (int i = 0; i < n; i++) cout << a[i] << " ";
		cout << a[n - 1] << endl;
	}
	else{
		sort(a, a + n);
		for (int i = 0; i<n - 1; i++) cout << a[i] << " ";
		cout << a[n - 1] << endl;
	}

}