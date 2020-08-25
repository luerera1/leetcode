#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin >> n;
	int ans = 0;
		int count = 0;
		string str;
		cin >> str;
		if (str.size()>10){
			ans = 0;
		}
		for (int i = 0; i<str.size(); i++){
			if (str[i]>'a'&&str[i]<'z' || str[i]>'A'&&str[i]<'Z'){
				count++;
			}
		}
		if (count == str.size()){
			ans++;
		}
	cout << ans << endl;
	return 0;
}