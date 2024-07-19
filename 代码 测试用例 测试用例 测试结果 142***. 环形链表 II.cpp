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
    ListNode *detectCycle(ListNode *head) {
        	struct ListNode* slow=head;
	struct ListNode* fast=head;
	while (1)
	{
		if (fast && fast->next)
		{
			fast = fast->next->next;
			slow = slow->next;
			if (fast == slow)
			{
				fast = head;
				break;
			}
		}
		else
		{
			return NULL;
		}
	}
	while (fast != slow)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return slow;
    }
};
