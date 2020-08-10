
class Solution {
public:
	bool isSymmetric(TreeNode* root) {
		bool res = true;
		if (root == nullptr) return true;
		else {
			res = helper(root->left, root->right);
		}
		return res;
	}
	bool helper(TreeNode* A, TreeNode* B){
		if (A == NULL&&B == NULL)
			return true;
		if (A == NULL || B == NULL)
			return false;
		if (A->val != B->val)
			return false;
		return helper(A->left, B->right) && helper(A->right, B->left);
	}
};