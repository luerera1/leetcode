class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> res;
		if (root == nullptr)
			return res;
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty()){
			int l = q.size();
			vector<int> r;
			for (int i = 0; i<l; i++){
				TreeNode* node = q.front();
				r.push_back(node->val);
				q.pop();
				if (node->left){
					q.push(node->left);
				}
				if (node->right){
					q.push(node->right);
				}
			}
			res.push_back(r);
		}
		return res;
	}
};

