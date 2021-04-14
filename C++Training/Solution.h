#pragma once

//You are given two non - empty linked lists representing two non - negative integers.
// The digits are stored in reverse order, and each of their nodes contains a single digit.Add the two numbersand return the sum as a linked list.
//
//You may assume the two numbers do not contain any leading zero, except the number 0 itself.

class Solution {
public:
	struct ListNode {
		int val;
		ListNode* next;
		ListNode() : val(0), next(nullptr) {}
		ListNode(int x) : val(x), next(nullptr) {}
		ListNode(int x, ListNode* next) : val(x), next(next) {}

	};

	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};
