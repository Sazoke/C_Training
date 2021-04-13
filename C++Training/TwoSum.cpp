#include "Solution.h"

//Given an array of integers numsand an integer target, return indices of the two numbers such that they add up to target.
//
//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
//You can return the answer in any order.

vector<int> Solution::twoSum(vector<int>& nums, int target) 
{
	unordered_map<int, int> map = {};
	for (int i = 0; i < nums.size(); i++)
	{
		if (map.find(target - nums[i]) != map.end())
			return{ map[target - nums[i]], i };
		map[nums[i]] = i;
	}
	return { 0,0 };
}