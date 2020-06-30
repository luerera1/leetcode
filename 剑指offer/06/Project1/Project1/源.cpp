class Solution {
public:
	vector<int> reversePrint(ListNode* head) {
		stack<int> st;
		vector<int> v;
		ListNode*p = head;
		while (p != NULL){
			st.push(p->val);
			p = p->next;
		}
		int res = 0;
		while (st.size()){
			res = st.top();
			st.pop();
			v.push_back(res);
		}
		return v;
	}
};