// Longest substring without repeating characters
// Given a string s, find the length of the longest substring with no-repeating characters.

// Input: s = "abcabcbb"
// Output: 3
// Explanation: the answer is "abc", with the length of 3

#include <iostream>
#include <unordered_map>
using namespace std;

class LongestSubstring
{
public:
    int longestSubstring(string s)
    {
        unordered_map<char, int> mpp;
        int left = 0, right = 0;
        int len = 0;
        int n = s.length();

        while (right < n)
        {
            if (mpp.find(s[right]) != mpp.end())
                left = max(left, mpp[s[right]] + 1);
            mpp[s[right]] = right;
            len = max(len, right - left + 1);
            right++;
        }

        return len;
    }
};