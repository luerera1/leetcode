#include<iostream>
#include<string>

using namespace std;
int myAtoi(string s) {
	int flag = 1;
	int sum = 0;
	for (int i = 0; i<s.size(); i++){
		if (s[i] == '-'){
			flag = -1;
		}
		if (!(s[i] >= '0' && s[i] <= '9')){
			continue;
		}
		sum = sum*10 + s[i] - '0';
	}
	return sum*flag;
}
int main(){
	string str;
	cin >> str;
	int res = myAtoi(str);
	cout << res << endl;
	return 0;
}