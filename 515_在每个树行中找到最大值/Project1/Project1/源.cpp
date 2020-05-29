
class Solution {
public:
	vector<int> largestValues(TreeNode* root) {
		vector<int> res;
		if (root == NULL) return res;
		queue<TreeNode*> q;
		q.push(root);
		while (!q.empty()){
			int n = q.size();
			int cur = INT_MIN;
			while (n>0){
				TreeNode* node = q.front();
				q.pop();
				cur = max(cur, node->val);
				if (node->left) q.push(node->left);
				if (node->right) q.push(node->right);
				n--;
			}
			res.push_back(cur);
		}
		return res;
	}
};