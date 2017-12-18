#pragma once

#include "definitions.h"

ListNode * createListNodes(const int ints[], int n) {
	ListNode *head = NULL, *pre = NULL;

	for (int i = 0; i < n; i++)
	{
		if (!head) {
			head = new ListNode(ints[i]);
			pre = head;
		}
		else {
			pre->next = new ListNode(ints[i]);
			pre = pre->next;
		}
	}

	return head;
}

void printListNodes(ListNode *head) {
	ListNode *p = head;

	cout << "[ ";

	while (p)
	{
		cout << p->val << " ";
		p = p->next;
	}

	cout << "]" << endl;
}