class Solution {
public:
	vector<int> levelOrder(TreeNode* root) {
		queue<TreeNode*> q;
		vector<int> res;
		if (root == nullptr)
			return res;
		q.push(root);
		while (!q.empty()){
			TreeNode* node = q.front();
			q.pop();
			res.push_back(node->val);
			if (node->left){
				q.push(node->left);
			}
			if (node->right){
				q.push(node->right);
			}
		}
		return res;
	}
};
