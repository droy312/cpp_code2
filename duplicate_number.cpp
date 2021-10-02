// Given an array with (n + 1) integers where each integer is between 1 to n (inclusive)
// Assume that there is only one duplicate number, find it.

// Input: [1, 3, 4, 2, 2]
// Output: 2

#include <iostream>
#include <vector>
using namespace std;

class DuplicateNumber
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int slow = nums[0];
        int fast = nums[0];

        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        fast = nums[0];

        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};