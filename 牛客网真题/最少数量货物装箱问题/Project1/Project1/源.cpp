#include<iostream>
using namespace std;
int main(){
	int x;
	cin >> x;
	int ans = 0;
	while (x>0){
		if (x>7){
			x -= 7;
			ans++;
			continue;
		}
		if (x>5){
			x -= 5;
			ans++;
			continue;
		}
		if (x > 3){
			x -= 3;
			ans++;
			continue;
		}
		if (x == 3){
			cout << 1 << endl;
			break;
		}
		else if (x<3){
			cout << -1 << endl;
			break;
		}
		else{
			cout << ans << endl;
			break;
		}
	}
	return 0;
}