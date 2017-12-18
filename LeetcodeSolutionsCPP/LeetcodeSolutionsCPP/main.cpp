#include "solution.h"
#include "utils.hpp"


class Test {
	Solution solution;
public:
	void testDeleteDuplicates() {
		int arr[] = { 2, 2};
		ListNode *input = createListNodes(arr, len(arr));
		printListNodes(input);
		ListNode *head = solution.deleteDuplicates(input);
		printListNodes(head);
	}
};


int main() {
	Test test;
	test.testDeleteDuplicates();

	system("pause");
	return 0;
}