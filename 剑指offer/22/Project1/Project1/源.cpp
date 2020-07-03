class Solution {
public:
	ListNode* getKthFromEnd(ListNode* head, int k) {
		ListNode*p = head;
		ListNode*q = head;
		while (k--){
			p = p->next;
		}
		while (p != NULL){
			q = q->next;
			p = p->next;
		}
		return q;
	}
};