public:
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* dummyHead = new ListNode(0);
		dummyHead->next = head;

		ListNode* p = dummyHead;
		ListNode* q = dummyHead;
		int i = 0;
		while (q){
			if (i >= n + 1)
				p = p->next;
			q = q->next;
			i++;
		}
		ListNode* delNode = p->next;
		p->next = delNode->next;
		delete delNode;

		ListNode* retNode = dummyHead->next;
		delete dummyHead;

		return retNode;

	}
};