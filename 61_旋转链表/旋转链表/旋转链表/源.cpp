class Solution {
public:
	ListNode* rotateRight(ListNode* head, int k) {
		ListNode* fast = head;
		ListNode* slow = head;
		int n = 0;
		if (!head) return NULL;
		ListNode*cur = head;
		while (cur){
			n++;
			cur = cur->next;
		}
		k %= n;
		for (int i = 0; i<k; i++){
			if (fast)
				fast = fast->next;
		}
		if (!fast) return head;
		while (fast->next){
			fast = fast->next;
			slow = slow->next;
		}
		fast->next = head;
		fast = slow->next;
		slow->next = NULL;
		return fast;
	}
};