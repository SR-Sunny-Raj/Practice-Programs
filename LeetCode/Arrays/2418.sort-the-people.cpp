/*
 * @lc app=leetcode id=2418 lang=cpp
 *
 * [2418] Sort the People
 */

// @lc code=start
class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        vector<string> ans;
        map<int, string> m;
        for (int i = 0; i < heights.size(); i++)
        {
            m.insert({heights[i], names[i]});
        }
        sort(heights.begin(), heights.end());
        for (int i = heights.size() - 1; i >= 0; i--)
        {
            ans.push_back(m.at(heights[i]));
        }
        return ans;
    }
};
// @lc code=end
