/*
 * @lc app=leetcode id=1822 lang=cpp
 *
 * [1822] Sign of the Product of an Array
 */

// @lc code=start
class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int x = -1, negCount = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                x = 0;
                break;
            }
            else if (nums[i] < 0)
                negCount += 1;
        }
        if (x == -1 && negCount % 2 == 0)
        {
            x = 1;
        }
        else if (x == -1 && negCount % 2 == 1)
        {
            x = -1;
        }
        return signFunc(x);
    }
    int signFunc(int x)
    {
        if (x > 0)
            return 1;
        else if (x < 0)
            return -1;
        else
            return 0;
    }
};
// @lc code=end
