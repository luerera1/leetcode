#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int a;
	int b;
}a[110], temp, res;
int cmp(node a, node b){
	if (a.a == b.a)
		return a.b<b.b;
	else
		return a.a<b.a;
}
int main(){
	int n;
	cin >> n;
	for (int i = 0; i<n; i++){
		cin >> a[i].a >> a[i].b;
	}
	int t;
	cin >> t;
	cin >> temp.a >> temp.b;
	sort(a, a + n, cmp);
	temp.b -= t;
	if (temp.b<0){
		int x = 0 - temp.b;
		temp.a -= x / 60 + 1;
		temp.b = 60 - x % 60;
	}
	for (int i = n - 1; i >= 0; i--){
		if (a[i].a<temp.a || a[i].a == temp.a&&a[i].b <= temp.b){
			cout << a[i].a << " " << a[i].b << endl;
			break;
		}
	}
	return 0;
}
