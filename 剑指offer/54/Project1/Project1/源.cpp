
class Solution {
public:
	int ans;
	int kthLargest(TreeNode* root, int k) {
		dfs(root, k);
		return ans;
	}

	void dfs(TreeNode* rt, int& k){
		if (!rt) return;
		if (k > 0) dfs(rt->right, k);
		if (k == 1){
			ans = rt->val;
		}
		k--;
		if (k > 0) dfs(rt->left, k);
	}
};
