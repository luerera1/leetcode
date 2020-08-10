#include<iostream>
#include<vector>

using namespace std;

bool isPrime(int num){
	bool flag = true;
	for (int i = 2; i <= num / 2; i++){
		if (num%i == 0){
			flag = false;
			break;
		}
	}
	if (flag)
		return true;
	else
		return false;
}
int main(){
	int n;
	cin >> n;
	vector<int> a;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int res = 0;
	for (int i = 0; i < n; i++){
		for (int j = 2; j < a[i]; j++){
			if (isPrime(a[j]) && isPrime(a[i] - a[j])){
				res++;
			}
		}
	}
	cout << res << endl;
	return 0;
}