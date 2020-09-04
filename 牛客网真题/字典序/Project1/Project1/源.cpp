#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	long n, m;
	cin >> n >> m;
	m--;
	long pos = 1;
	while (m != 0){
		long left = pos;
		long right = pos + 1;
		long num = 0;
		while (n >= left){
			num += min(n + 1, right) - left;
			left *= 10;
			right *= 10;
		}
		if (num>m){
			pos *= 10;
			m--;
		}
		else{
			m -= num;
			pos++;
		}
	}
	cout << pos << endl;
	return 0;
}