#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin >> s;
	char c = s[0];
	double n = 1, sum;
	for (int i = 1; i<s.size(); i++){
		if (c != s[i]){
			c = s[i];
			n++;
		}
	}
	sum = (double)s.size() / n;
	printf("%.2lf\n", sum);
	return 0;
}