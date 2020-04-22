#include"stdio.h"
#include"string"
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main(){
	string str;
	cin >> str;
	stack<char> st;
	for (int i = 0; i<str.size(); i++){
		if (str[i] == '['){
			st.push(str[i]);
		}
		else if (str[i] == ']'){
			char tmpc = st.top();
			string tmp;
			while (tmpc >= 'A'&&tmpc <= 'Z'){
				tmp = tmpc + tmp;
				st.pop();
				tmpc = st.top();
			}
			if (!str.empty()){
				st.pop();
			}
			int n = 0;
			int cntn = 1;
			while (st.top() >= '0'&&st.top() <= '9'){
				n = n + (st.top() - '0')*cntn;
				st.pop();
				cntn *= 10;
			}
			string res;
			while (n>0){
				res += tmp;
				n--;
			}
			if (!str.empty()){
				st.pop();
			}
			for (char tmpc : res){
				st.push(tmpc);
			}
		}
		else{
			st.push(str[i]);
		}
	}
	string s;
	while (!st.empty()){
		s = st.top() + s;
		st.pop();
	}
	cout << s << endl;
	return 0;
}
