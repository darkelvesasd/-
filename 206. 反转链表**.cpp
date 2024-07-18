/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* pre = NULL;
	struct ListNode* cur = head;
	struct ListNode* nex =head;
 //   struct ListNode*re=head;
	while (nex != NULL)
	{
        cur=nex;
		nex = nex->next;
		cur->next = pre;
        pre=cur;
	}
    return cur;
}
