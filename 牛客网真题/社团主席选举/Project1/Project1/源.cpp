#include<iostream>
#include<vector>
#include<climits>
#include<map>
#include<unordered_map>
#include<algorithm>

using namespace std;


//�������⡪��������ϯѡ��
//��x[n]��y[n]�ֱ𱣴�ÿ��ͶƱ�ߵ�֧�ֶ������Ҫ���ǹ�����
//�������Ҵ�����˲������ò�����Сֵ������һ��bool vis[n]�����һ�����Ƿ񱻻�¸��
//�������ϣ�������_Ʊ���������ݱ�ű�����޸�Ʊ��
//��һ��ȫ�ֱ���M��Ϊ�ǹ�����������
int n, m;
unordered_map<int, int> code_vote;
int M = INT_MAX;

//�ҳ���ǰƱ����ߵı��
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

//����һ��pair���������±��ʾͶƱ�ߣ�first������������û�¸�ģ�second��֧��code��������û�¸��
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

//���������������ʼ��������·������¸����������û�¸�ģ����߻�¸���Ʊ֧��������û�¸��
void dfs(int cost, vector<int> &x, vector<int> &y, vector<bool> &vis){
	//��Ŀǰ�����ǹ����������ֵ�����ټ���
	if (cost >= M) return;
	//�������ҳ����Ʊ�ı��
	int maxMan = maxCode();
	//�����Ʊ�ı����1�����ټ������������ֵΪ��ǰ�����ǹ���
	if (maxMan == 1){
		if (cost<M) M = cost;
		return;
	}
	//�����ҳ�����Ҫ���һ��pair
	pair<int, int> mcLoc = minCandy_loc(maxMan, x, y, vis);

	//��¸pair.first��ͶƱ�ߣ����˵�һ��·��������������û�¸��
	--code_vote[x[mcLoc.first]];
	++code_vote[1];
	vis[mcLoc.first] = true;
	//��������ǹ��������ģ���������dfs
	dfs(cost + y[mcLoc.first], x, y, vis);
	//���յ����ĳ��������ֵ����ı������ֵ��1�����Ʊ��
	vis[mcLoc.first] = false;
	++code_vote[x[mcLoc.first]];
	--code_vote[1];
	//����û�¸�ߺ�֧�����Ʊ�����û�¸����һ����ʱ�����ټ���
	if (mcLoc.first == mcLoc.second) return;

	//��¸pair.second��ͶƱ�ߣ�����·�������ھ�֧��������û�¸��
	--code_vote[x[mcLoc.second]];
	++code_vote[1];
	vis[mcLoc.second] = true;
	//��������ǹ��������ģ���������dfs
	dfs(cost + y[mcLoc.second], x, y, vis);
	//���յ����ĳ��������ֵ����ı������ֵ����֮��ʱ���ֵ�Ѿ�ȷ������
	vis[mcLoc.second] = false;
	++code_vote[x[mcLoc.second]];
	--code_vote[1];
}

int main(){
	cin >> n >> m;
	vector<int> x(n);
	vector<int> y(n);
	vector<bool> vis(n);
	//��ʼ�����к�ѡ�˵�Ʊ��
	for (int i = 0; i<n; ++i){
		cin >> x[i] >> y[i];
		++code_vote[x[i]];
	}
	dfs(0, x, y, vis);
	//��ӡ��С�ǹ�����
	cout << M << endl;
}
