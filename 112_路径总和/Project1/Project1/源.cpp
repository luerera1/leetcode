class Solution {
public:
	bool hasPathSum(TreeNode* root, int sum) {
		if (root == NULL) return false;
		sum -= root->val;
		if (root->left == nullptr&&root->right == nullptr){
			return sum == 0;
		}
		return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
	}
};