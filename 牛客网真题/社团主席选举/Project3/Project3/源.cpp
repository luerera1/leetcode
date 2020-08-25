#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool helper(string str){
	string res;
	bool flag = true;
	for (int i = 0; i < str.size(); i++){
		res.push_back(str[i]);
	}
	for (int i = 0; i < str.size(); i++){
		if (str[i] != 'A' && str[i] != 'H' && str[i] != 'I' &&
			str[i] != 'M' && str[i] != 'O' && str[i] != 'T' &&
			str[i] != 'U' && str[i] != 'V' && str[i] != 'W' &&
			str[i] != 'X' && str[i] != 'Y'){
			flag = false;
			return flag;
		}
	}
	reverse(str.begin(), str.end());
	for (int i = 0; i < str.size(); i++){
		if (str[i] != res[i]){
			flag = false;
			return flag;
		}
	}
	return flag;
}
int main(){
	string str;
	while (cin >> str){
		if (helper(str)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
	return 0;
}