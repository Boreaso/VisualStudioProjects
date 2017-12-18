#include "definitions.h"
#include "solution.h"

ListNode * Solution::deleteDuplicates(ListNode* head) {
	ListNode *pre = NULL, *cur = head;
	bool flag = false;

	while (cur) {
		ListNode *next = cur->next;
		while (next && next->val == cur->val)
		{
			flag = true;
			cur->next = next->next;
			free(next);
			next = cur->next;
		}

		if (flag) {
			//删除第一个重复节点
			if (pre) {
				pre->next = cur->next;
				free(cur);
				cur = pre->next;
			}
			else {
				head = cur->next;
				free(cur);
				cur = head;
			}
			flag = false;
			continue;
		}

		pre = cur;
		cur = cur->next;
	}

	return head;
}
