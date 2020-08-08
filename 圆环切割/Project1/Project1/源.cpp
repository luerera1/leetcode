#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int cmp(const long long &a, const long long &b){
	return a > b;
}
int main(){
	int total;
	cin >> total;

	for (int i = 0; i < total; ++i){
		int n;
		cin >> n;
		vector<long long> vec;
		long long sum = 0;
		for (int j = 0; j < n; ++j){
			int t;
			cin >> t;
			vec.push_back(t);
			sum += vec[j];
		}
		long long sum1 = vec[0];
		long long sum2 = sum - vec[0];
		int i1 = 0, i2 = vec.size() - 1;
		bool next = false;
		while (true){
			if (sum1 < sum2){
				i1 = (vec.size() + i1 + 1) % vec.size();
				sum1 += vec[i1];
				sum2 -= vec[i1];
			}
			else if (sum1 > sum2){
				i2 = (vec.size() + i2 + 1) % vec.size();
				sum1 -= vec[i2];
				sum2 += vec[i2];
			}
			else{
				break;
			}
			if (i2 == vec.size() - 1){
				if (next){
					break;
				}
			}
			else{
				next = true;
			}
		}

		if (sum1 == sum2){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}
	}
}
