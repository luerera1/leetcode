#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	int f, c, h;
	int H;
	vector<int> nodes(n);
	vector<int> child(n);
	nodes[0] = 1;
	while (n--){
		cin >> f >> c;
		if (nodes[f] == 0 || child[f] == 2)
			continue;
		child[f] += 1;
		h = nodes[f] + 1;
		nodes[c] = h;
		if (h>H) H = h;
	}
	cout << H;
	return 0;
}