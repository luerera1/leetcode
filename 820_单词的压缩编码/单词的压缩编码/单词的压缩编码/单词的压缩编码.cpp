class Solution {
public:
	int minimumLengthEncoding(vector<string>& words) {
		vector<string> reverse_words;
		for (string word : words){
			reverse(word.begin(), word.end());
			reverse_words.push_back(word);
		}
		int n = words.size();
		int res = 0;
		sort(reverse_words.begin(), reverse_words.end());
		for (int i = 0; i<n; i++){
			if (i + 1<n && reverse_words[i + 1].find(reverse_words[i]) == 0){

			}
			else{
				res += reverse_words[i].length() + 1;
			}
		}
		return res;
	}
};