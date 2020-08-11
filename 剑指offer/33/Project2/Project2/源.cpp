
class Solution {
public:
	vector<vector<int>> res;
	vector<vector<int>> pathSum(TreeNode* root, int sum) {
		if (root == nullptr)
			return res;
		vector<int> sub;
		help(root, sum, sub);
		return res;
	}
	void help(TreeNode* root, int sum, vector<int>& sub){
		if (root == nullptr)
			return;
		sub.push_back(root->val);
		if (sum == root->val&&root->left == nullptr&&root->right == nullptr){
			res.push_back(sub);
		}
		help(root->left, sum - root->val, sub);
		help(root->right, sum - root->val, sub);
		sub.pop_back();
	}
};