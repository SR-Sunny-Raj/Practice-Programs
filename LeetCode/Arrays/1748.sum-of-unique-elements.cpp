/*
 * @lc app=leetcode id=1748 lang=cpp
 *
 * [1748] Sum of Unique Elements
 */

// @lc code=start
class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        int hashTable[101] = {0};
        for (int i = 0; i < nums.size(); i++)
        {
            hashTable[nums[i]]++;
        }
        int sum = 0;
        for (int i = 1; i < 101; i++)
        {
            if (hashTable[i] == 1)
            {
                sum += i;
            }
        }
        return sum;
    }
};
// @lc code=end
