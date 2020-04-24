#include<iostream>
#include<string>
using namespace std;
int  main(){
	int n;
	cin >> n;
	while (n--){
		string str;
		cin >> str;
		char cur;
		char last = str[0];
		string ans = "";
		int state = 0;
		ans += last;
		for (int i = 1; i<str.size(); i++){
			cur = str[i];
			switch (state){
			case 0:
			{
					  if (cur == last)
						  state = 1;
					  else
						  state = 0;
					  break;
			}
			case 1:
			{
					  if (cur == last)
						  continue;
					  else
						  state = 2;
					  break;
			}
			case 2:
			{
					  if (cur == last)
						  continue;
					  else
						  state = 0;
					  break;
			}
			default:
				break;
			}
			ans += cur;
			last = cur;
		}
		cout << ans << endl;
	}
	return 0;
}