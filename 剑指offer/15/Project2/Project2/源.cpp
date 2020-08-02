#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n, m, x;
	cin >> n >> m >> x;
	vector<int> ai;
	for (int i = 0; i<n; i++){
		cin >> ai[i];
	}
	sort(ai.begin(), ai.end());
	int pre = ai[0];
	int cur = 0;
	int j = 0;
	while (m){
		for (int i = 0; i<n; i++){
			cur = min(cur, ai[i]);
			j = i;
		}
		ai[j] += x;
	}
	cur = ai[0] - pre;
	cout << cur << endl;
	return 0;
}