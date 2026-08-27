/*
 * @lc app=leetcode id=2154 lang=cpp
 *
 * [2154] Keep Multiplying Found Values by Two
 */

// @lc code=start
class Solution
{
public:
    int findFinalValue(vector<int> &nums, int original)
    {
        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] == original)
            {
                nums[i] *= 2;
                original = nums[i];
                i = 0;
            }
            else
                i++;
        }
        return original;
    }
};
// @lc code=end
