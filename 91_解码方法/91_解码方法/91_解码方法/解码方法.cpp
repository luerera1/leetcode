class Solution {
public:
	int numDecodings(string s) {
		int length = s.size();
		if (length == 0 || s[0] == '0') return 0;
		vector<int> dp(length, 0);
		dp[0] = 1;
		for (int i = 1; i < length; i++){
			//��i���ַ�������ǰ���dp[i-1]��ϵ����
			//�����ǰ�ַ�Ϊ0������ ��Ϊ0���ܵ�������ַ�
			if (s[i] != '0')
				dp[i] += dp[i - 1];
			//��i-1��i���ַ����Ժϲ������
			//���i=1,��+1���������ǰ�����ַ��������
			if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] >= '0' && s[i] <= '6')){
				if (i - 1 > 0)
					dp[i] += dp[i - 2];
				else
					dp[i] += 1;
			}
		}
		return dp[length - 1];
	}
};

