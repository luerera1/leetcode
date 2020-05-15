class Solution {
public:
	int characterReplacement(string s, int k) {
		int res = 0;
		int left = 0, right = 0;
		int count[26]{0};
		int result = 0;
		while (right<s.size()){
			count[s[right] - 'A']++;
			res = max(res, count[s[right] - 'A']);
			if (right - left + 1 - res>k){
				count[s[left] - 'A']--;
				left++;
			}
			result = max(result, right - left + 1);
			right++;
		}
		return result;
	}
};
