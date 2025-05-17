/*
 * @lc app=leetcode id=1779 lang=cpp
 *
 * [1779] Find Nearest Point That Has the Same X or Y Coordinate
 */

// @lc code=start
class Solution
{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>> &points)
    {
        int distance = INT_MAX, index = -1;
        for (int i = 0; i < points.size(); i++)
        {
            if (points[i][0] == x || points[i][1] == y)
            {
                int tempDist = abs(points[i][0] - x) + abs(points[i][1] - y);
                if (tempDist < distance)
                {
                    distance = tempDist;
                    index = i;
                }
            }
        }
        return index;
    }
};
// @lc code=end
