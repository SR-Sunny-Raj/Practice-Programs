/*
 * @lc app=leetcode id=860 lang=cpp
 *
 * [860] Lemonade Change
 */

// @lc code=start
class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        int count5 = 0, count10 = 0, count20 = 0;
        for (int i = 0; i < bills.size(); i++)
        {
            if (bills[i] == 5)
            {
                count5++;
            }
            else if (bills[i] == 10)
            {
                count10++;
                if (count5 == 0)
                    return false;
                else
                    count5--;
            }
            else if (bills[i] == 20)
            {
                count20++;
                if (count10 == 0)
                {
                    if (count5 < 3)
                    {
                        return false;
                    }
                    else
                    {
                        count5 -= 3;
                    }
                }
                else if (count10 != 0)
                {
                    if (count5 == 0)
                    {
                        return false;
                    }
                    else
                    {
                        count10--;
                        count5--;
                    }
                }
            }
        }
        return true;
    }
};
// @lc code=end
