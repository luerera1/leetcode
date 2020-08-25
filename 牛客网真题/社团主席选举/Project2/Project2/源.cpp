#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	while (cin >> str){
		string res;
		for (int i = 0; i<str.size(); i++){
			res.push_back(str[i]);
			if (str[i] != 'A' || str[i] != 'H' || str[i] != 'I' || str[i] != 'M' || str[i] != 'O'
				|| str[i] != 'T' || str[i] != 'U' || str[i] != 'V' || str[i] != 'W'
				|| str[i] != 'X' || str[i] != 'Y'){
				cout << "NO" << endl;
				return 0;
			}
		}
		reverse(str.begin(), str.end());
		for (int i = 0; i<str.size(); i++){
			if (str[i] != res[i]){
				cout << "NO" << endl;
			}
		}
		cout << "YES" << endl;
	}
	return 0;
}