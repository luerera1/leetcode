class Solution {
public:
	bool isBalanced(TreeNode* root) {
		return !root ? true : abs(depth(root->left) - depth(root->right)) <= 1 && isBalanced(root->left) && isBalanced(root->right);
	}
	int depth(TreeNode* root){
		return !root ? 0 : max(depth(root->left), depth(root->right)) + 1;
	}
};