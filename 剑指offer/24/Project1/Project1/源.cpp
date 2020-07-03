
class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode*pre = nullptr;
		ListNode*next = nullptr;
		ListNode*cur = head;
		if (head == NULL)
			return head;
		while (cur->next){
			next = cur->next;
			cur->next = pre;
			pre = cur;
			cur = next;
		}
		cur->next = pre;
		return cur;
	}
};