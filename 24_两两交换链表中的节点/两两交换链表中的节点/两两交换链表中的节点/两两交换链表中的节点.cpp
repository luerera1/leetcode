class Solution {
public:
	ListNode* swapPairs(ListNode* head) {
		ListNode* d = new ListNode(0);
		d->next = head;
		ListNode* p = d;
		while (p->next&&p->next->next){
			ListNode* node1 = p->next;
			ListNode* node2 = node1->next;
			ListNode* next = node2->next;

			node2->next = node1;
			node1->next = next;
			p->next = node2;

			p = node1;
		}
		ListNode *res = d->next;
		delete d;
		return res;
	}
};