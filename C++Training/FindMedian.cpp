#include "Solution.h"

double Solution::findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
	int i = 0;
	int j = 0;
	int lastNums[2] = {};
	int point = (double(nums1.size()) + nums2.size()) / 2 + 1;

	while (i + j < point)
	{
		lastNums[0] = lastNums[1];
		if (i != nums1.size() && j != nums2.size())
		{
			if (nums1[i] < nums2[j])
				lastNums[1] = nums1[i++];
			else
				lastNums[1] = nums2[j++];
		}
		else if (i != nums1.size())
			lastNums[1] = nums1[i++];
		else
			lastNums[1] = nums2[j++];
	}

	if ((nums1.size() + nums2.size()) % 2 != 0)
		return lastNums[1];
	return (double(lastNums[0]) + lastNums[1]) / 2;
}