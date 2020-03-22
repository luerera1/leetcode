class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		ListNode* p; ListNode* q;
		p = q = pListHead;
		int i = 0;
		while (p)
		{
			if (i >= k)
				q = q->next;
			p = p->next;
			i++;
		}

		return (i < k) ? NULL : q;
	}
};
