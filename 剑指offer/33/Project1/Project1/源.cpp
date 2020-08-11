class Solution {
public:
	bool verifyPostorder(vector<int>& postorder) {
		return helper(postorder, 0, postorder.size() - 1);
	}
	bool helper(vector<int>& post, int i, int j){
		if (i >= j) return true;
		int root = post[j];
		int l = i;
		while (l<j&&post[l]<root)
			l++;
		int r = l;
		while (r<j&&post[r]>root)
			r++;
		if (r != j) return false;
		return helper(post, i, l - 1) && helper(post, l, j - 1);
	}
};