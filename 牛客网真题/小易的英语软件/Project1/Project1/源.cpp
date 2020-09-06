#include<iostream>

using namespace std;
int main(){
	double n;
	cin >> n;
	double a[10002];
	for (int i = 1; i<n + 1; i++){
		cin >> a[i];
	}
	int q;
	cin >> q;
	int m;
	double y = 0;
	double res;
	for (int i = 0; i < q; i++){
		cin >> m;
		for (int j = 1; j < n + 1; j++){
			if (a[m] >= a[j])
				y++;
		}
		res = (y - 1) / n * 100;
		printf("%0.6lf\n", res);
		y = 0;
	}
	return 0;
}