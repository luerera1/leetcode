#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	vector<int> k(m + 1);
	vector<int> vis(n + 1, 1);
	for (int i = 1; i <= m; i++){
		cin >> k[i];
	}
	for (int i = m; i >= 1; i++){
		cout << k[i] << endl;
		vis[k[i]] = 0;
	}
	for (int i = 1; i <= n; i++){
		if (vis[i] == 1){
			cout << i << endl;
		}
	}
	return 0;
}