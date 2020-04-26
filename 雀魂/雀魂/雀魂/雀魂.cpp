#include<iostream>
#include<vector>
using namespace std;
vector<int> card(9);
bool ishu(int n){
	if (n == 0)
		return true;
	for (int i = 0; i<card.size(); i++){
		if (card[i]>2){
			card[i] -= 3;
			if (ishu(n - 1)){
				card[i] += 3;
				return true;
			}
			card[i] += 3;
		}
		else if (i<card.size() - 2 && card[i]>0 && card[i + 1]>0 && card[i + 2]>0){
			card[i]--;
			card[i + 1]--;
			card[i + 2]--;
			if (ishu(n - 1)){
				card[i]++;
				card[i + 1]++;
				card[i + 2]++;
				return true;
			}
			card[i]++;
			card[i + 1]++;
			card[i + 2]++;
		}
	}
	return false;
}
bool iswin(){
	for (int i = 0; i<9; i++){
		if (card[i]<2)
			continue;
		card[i] -= 2;
		if (ishu(4)){
			card[i] += 2;
			return true;
		}
		card[i] += 2;
	}
	return false;
}
int main(){
	vector<int> res;
	int tmp;
	for (int i = 0; i<13; i++){
		cin >> tmp;
		card[tmp - 1]++;
	}
	for (int i = 0; i<9; i++){
		if (card[i]>3)
			continue;
		card[i]++;
		if (iswin()){
			res.push_back(i + 1);
		}
		card[i]--;
	}
	if (res.empty()) res.push_back(0);
	for (int i = 0; i<res.size(); i++){
		cout << res[i] << " ";
	}
	return 0;
}