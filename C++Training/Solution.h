#pragma once
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

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
	vector<int> twoSum(vector<int>& nums, int target);
	int lengthOfLongestSubstring(string s);
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2);
};
