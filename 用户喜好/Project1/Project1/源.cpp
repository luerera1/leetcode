#include<iostream>

using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n];
	for (int i = 1; i<n + 1; i++){
		cin >> a[i];
	}
	int q;
	cin >> q;
	while (q--){
		int b[3];
		for (int i = 0; i<3; i++){
			cin >> b[i];
		}
		int count = 0;
		for (int i = b[0]; i <= b[1]; i++){
			if (b[2] == a[i]){
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}