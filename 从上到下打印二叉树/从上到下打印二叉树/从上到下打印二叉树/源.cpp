/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> res;
		if (root == NULL) return res;
		deque<TreeNode*> q;
		q.push_back(root);
		bool flag = true;
		while (!q.empty()){
			int n = q.size();
			vector<int> out;
			TreeNode* node;
			while (n>0){
				if (flag){
					node = q.front();
					q.pop_front();
					if (node->left)
						q.push_back(node->left);
					if (node->right)
						q.push_back(node->right);
				}
				else{
					node = q.back();
					q.pop_back();
					if (node->right)
						q.push_front(node->right);
					if (node->left)
						q.push_front(node->left);
				}
				out.push_back(node->val);
				n--;
			}
			flag = !flag;
			res.push_back(out);
		}
		return res;
	}
};