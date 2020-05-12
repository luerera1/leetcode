class Solution {
public:
	//ǰ���ǿ���ͨ��ɾ��s�е��ַ���ֱ�ӵõ�target��˵��˳����ͬ��ֻ�ǲ�����������ĸ
	string findLongestWord(string s, vector<string>& d) {
		//��������������ֵ
		string longestStr = "";
		//��������
		for (int i = 0; i<d.size(); i++){
			//����ȵ�ǰ��Ѿ�ƥ��ĵ��ʻ��̣�һ������
			if (longestStr.size()>d[i].size()){
				continue;
			}
			//���һ������//�Ҹ���һ������
			if (d[i].size() == longestStr.size() && longestStr.compare(d[i])<0){
				continue;
			}
			//����������У��������
			if (SubString(s, d[i])){
				longestStr = d[i];
			}
		}
		return longestStr;
	}
	//˫ָ���ж��Ƿ���������
	bool SubString(string s, string target){
		int i = 0, j = 0;
		while (i<s.length() && j<target.length()){
			//��ͬ����ָ�붼����һλ
			if (s[i] == target[j]){
				j++;
			}
			//�������ͬ��ɾ���൱��s����һλָ��
			i++;
		}
		if (j == target.length()){
			return true;
		}
		return false;
	}

};