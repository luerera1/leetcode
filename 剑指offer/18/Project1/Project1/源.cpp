* /
class Solution {
public:
	ListNode* deleteNode(ListNode* head, int val) {
		ListNode* dummy = new ListNode(-1);
		dummy->next = head; //��������ͷ�ڵ�
		ListNode* cur = dummy;
		while (cur->next)
		if (cur->next->val == val) cur->next = cur->next->next;
		else cur = cur->next;
		return dummy->next;
	}
};