#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
	string str;
	cin >> str;
	set<char> s;
	for (int i = 0; i<str.size(); i++){
		s.insert(str[i]);
	}
	cout << s.size() << endl;
	return 0;
}