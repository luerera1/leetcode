/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/
class Solution {
public:
	bool hasCycle(ListNode *head) {
		ListNode *fast = head;
		ListNode *slow = head;
		while (fast != NULL){
			if (fast != NULL&&fast->next != NULL&&fast->next->next != NULL){
				fast = fast->next->next;
				slow = slow->next;
			}
			else{
				return 0;
			}
			if (slow == fast){
				return 1;
			}
		}
		return 0;
	}
};