#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	while (cin >> str){
		for (int i = 0; i<str.size() - 1; i++)
		for (int j = 0; j<str.size() - 1 - i; j++)
		if ((str[j] >= 'A'&&str[j] <= 'Z') && (str[j + 1]<'A' || str[j + 1]>'Z')){
			char t = str[j];
			str[j] = str[j + 1];
			str[j + 1] = t;
		}
		cout << str << endl;
	}
	return 0;
}