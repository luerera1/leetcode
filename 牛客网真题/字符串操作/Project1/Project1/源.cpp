#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int n, m;
	cin>>n>>m;
	string s;
	cin>>s;
	int i = 0, j = 0;
	int b = 0, ans = 0, res = 0;
	while (i<s.size() && m>0){
		if (s[i] == 'a'&&b = m){
			ans++;
			i++;
			continue;
		}
		if (s[i] == 'b'){
			b++;
			if (b>m){
				i = j + 1;
				ans = 0;
				b = 0;
				continue;
			}
			else{
				ans++;
			}
			j = i;
			i++;
		}
		res = max(res, ans);
		m--;
	}
	cout<<res<< endl;
	return 0;
}