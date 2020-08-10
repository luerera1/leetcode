class Solution {
public:
	TreeNode* mirrorTree(TreeNode* root) {
		if (!root) return nullptr;
		mirrorTree(root->left);
		mirrorTree(root->right);
		swap(root->left, root->right);
		return root;
	}
};