#include<iostream>
#include<vector>
#include<climits>
#include<map>
#include<unordered_map>
#include<algorithm>

using namespace std;


//网易真题——社团主席选举
//用x[n]，y[n]分别保存每个投票者的支持对象和想要的糖果数量
//排序会打乱次序，因此不排序，用查找最小值函数和一个bool vis[n]来标记一个人是否被贿赂过
//用无序哈希表——编号_票数，来根据编号保存和修改票数
//用一个全局变量M作为糖果的消耗数量
int n, m;
unordered_map<int, int> code_vote;
int M = INT_MAX;

//找出当前票数最高的编号
int maxCode(){
	int maxC = 0;
	int code = 0;
	for (int i = m; i>0; --i){
		if (maxC < code_vote[i]){
			maxC = code_vote[i];
			code = i;
		}
	}
	return code;
}

//返回一个pair，含两个下标表示投票者，first是所有人中最好贿赂的，second是支持code的人中最好贿赂的
pair<int, int> minCandy_loc(int code, vector<int> &x, vector<int> &y, vector<bool> &vis){
	int left = INT_MAX;
	int right = INT_MAX;
	int leftloc = 0;
	int rightloc = 0;
	for (int i = 0; i<n; ++i){
		if (vis[i]) continue;
		if (left > y[i]){
			left = y[i];
			leftloc = i;
		}
		if (x[i] == code){
			if (right > y[i]){
				right = y[i];
				rightloc = i;
			}
		}
	}
	return make_pair(leftloc, rightloc);
}

//深度优先搜索，初始就有两条路径：贿赂所有人中最好贿赂的，或者贿赂最高票支持者中最好贿赂的
void dfs(int cost, vector<int> &x, vector<int> &y, vector<bool> &vis){
	//当目前消耗糖果数大于最大值，则不再继续
	if (cost >= M) return;
	//否则先找出最高票的编号
	int maxMan = maxCode();
	//若最高票的编号是1，则不再继续，且令最大值为当前消耗糖果数
	if (maxMan == 1){
		if (cost<M) M = cost;
		return;
	}
	//否则，找出符合要求的一对pair
	pair<int, int> mcLoc = minCandy_loc(maxMan, x, y, vis);

	//贿赂pair.first号投票者，此乃第一条路径，所有人中最好贿赂的
	--code_vote[x[mcLoc.first]];
	++code_vote[1];
	vis[mcLoc.first] = true;
	//加上这次糖果数的消耗，继续进行dfs
	dfs(cost + y[mcLoc.first], x, y, vis);
	//最终的消耗超过了最大值，或改变了最大值（1是最高票）
	vis[mcLoc.first] = false;
	++code_vote[x[mcLoc.first]];
	--code_vote[1];
	//当最好贿赂者和支持最高票里的最好贿赂者是一个人时，不再继续
	if (mcLoc.first == mcLoc.second) return;

	//贿赂pair.second号投票者，此乃路径二，冠军支持者中最好贿赂的
	--code_vote[x[mcLoc.second]];
	++code_vote[1];
	vis[mcLoc.second] = true;
	//加上这次糖果数的消耗，继续进行dfs
	dfs(cost + y[mcLoc.second], x, y, vis);
	//最终的消耗超过了最大值，或改变了最大值，总之此时最大值已经确定下来
	vis[mcLoc.second] = false;
	++code_vote[x[mcLoc.second]];
	--code_vote[1];
}

int main(){
	cin >> n >> m;
	vector<int> x(n);
	vector<int> y(n);
	vector<bool> vis(n);
	//初始化所有候选人的票数
	for (int i = 0; i<n; ++i){
		cin >> x[i] >> y[i];
		++code_vote[x[i]];
	}
	dfs(0, x, y, vis);
	//打印最小糖果消耗
	cout << M << endl;
}
