#include<iostream>
using namespace std;

int main() {
	double n;//�༶����
	double a[10002];
	int q;//ѯ�ʵĴ���
	double x;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	cin >> q;
	int m;
	double y = 0;

	for (int i = 0; i < q; i++) {
		cin >> m;
		for (int k = 1; k < n + 1; k++) {
			if (a[m] >= a[k])
				y++;
		}
		x = (y - 1) / n * 100;
		printf("%0.6lf\n", x);
		y = 0;
	}
	return 0;
}