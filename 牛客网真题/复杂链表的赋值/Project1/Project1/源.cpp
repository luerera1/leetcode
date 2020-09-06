/*
struct RandomListNode {
int label;
struct RandomListNode *next, *random;
RandomListNode(int x) :
label(x), next(NULL), random(NULL) {
}
};
*/
class Solution {
public:
	RandomListNode* Clone(RandomListNode* pHead)
	{
		if (pHead == NULL) return pHead;
		RandomListNode* pcur = pHead;
		RandomListNode* next = NULL;
		while (pcur){
			RandomListNode* clone = new RandomListNode(pcur->label);
			next = pcur->next;
			pcur->next = clone;
			clone->next = next;
			pcur = next;
		}
		pcur = pHead;
		while (pcur){
			next = pcur->next;
			next->random = pcur->random ? pcur->random->next : pcur->random;
			pcur = next->next;
		}
		pcur = pHead;
		RandomListNode* newhead = pcur->next;
		while (pcur){
			next = pcur->next;
			pcur->next = next->next;
			pcur = next->next;
			next->next = pcur ? pcur->next : pcur;
		}
		return newhead;
	}
};