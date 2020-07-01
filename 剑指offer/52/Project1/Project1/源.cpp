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
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		ListNode*p = headA;
		ListNode*q = headB;
		int res1 = 0, res2 = 0;
		while (p != NULL){
			res1++;
			p = p->next;
		}
		while (q != NULL){
			res2++;
			q = q->next;
		}
		p = headA, q = headB;
		if (res1 >= res2){
			int k = res1 - res2;
			while (k--){
				p = p->next;
			}
		}
		else{
			int k = res2 - res1;
			while (k--){
				q = q->next;
			}
		}
		while (p != q){
			p = p->next;
			q = q->next;
		}
		return p;
	}
};
