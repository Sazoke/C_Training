#include "Solution.h"

//You are given two non - empty linked lists representing two non - negative integers.
// The digits are stored in reverse order, and each of their nodes contains a single digit.Add the two numbersand return the sum as a linked list.
//
//You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Solution::ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2) 
{
	ListNode* res = new ListNode();
	ListNode* conter = res;
	int sum = 0;
	while (l1 != nullptr || l2 != nullptr)
	{
		if (l1 != nullptr)
		{
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2 != nullptr)
		{
			sum += l2->val;
			l2 = l2->next;
		}
		conter->next = new ListNode(sum % 10);
		conter = conter->next;
		sum /= 10;
	}
	if (sum != 0)
		conter->next = new ListNode(sum);
	return res->next;
}