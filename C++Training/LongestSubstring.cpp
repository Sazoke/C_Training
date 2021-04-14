#include"Solution.h"

//Given a string s, find the length of the longest substring without repeating characters.

int Solution::lengthOfLongestSubstring(string s) 
{
	string* sub = new string();
	int bestLength = 0;
	for (char word : s)
	{
		string::size_type pos = sub->find(word);
		if (pos != string::npos)
		{
			int length = sub->length();
			if (bestLength < length)
				bestLength = length;
			*sub = sub->substr(pos + 1);
		}
		sub->push_back(word);
	}

	if (bestLength < sub->length())
		bestLength = sub->length();

	return bestLength;
}