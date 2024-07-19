/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    	struct ListNode* slow=head;
	struct ListNode* fast=head;
	while (fast&&fast->next)
	{
		fast = fast->next;
		if (fast)
		{
			fast = fast->next;
		}
		slow = slow->next;
		if (fast == slow)
		{
			return 1;
			break;
		}
    }
	return 0;
}
