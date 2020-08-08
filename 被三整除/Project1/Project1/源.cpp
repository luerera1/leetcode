#include<iostream>

using namespace std;

int main(){
	long long int l;
	long long int r;
	cin >> l;
	cin >> r;
	long long int n;
	for (long long int i = l; i <= r; i++){
		if ((i + 1)*i / 2 % 3 == 0){
			n++;
		}
	}
	cout << n << endl;
	return 0;
}