class Solution {
public:
	int findBottomLeftValue(TreeNode* root) {
		int res = 0;
		queue<TreeNode*> q{ { root } };
		while (!q.empty()){
			int n = q.size();
			for (int i = 0; i<n; i++){
				TreeNode* node;
				node = q.front();
				q.pop();
				if (i == 0) res = node->val;
				if (node->left) q.push(node->left);
				if (node->right) q.push(node->right);
			}
		}
		return res;
	}
};