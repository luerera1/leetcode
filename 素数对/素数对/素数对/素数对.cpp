#include<iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
	if (n == 1) return false;
	for (int i = 2; i <= sqrt(n); i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin >> n;
	int count = 0;
	for (int i = 2; i <= (n + 1) / 2; i++){
		if (isPrime(i) && isPrime(n - i)){
			count++;
		}
	}
	cout << count << endl;
	return 0;
}