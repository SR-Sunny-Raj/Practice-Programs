/*
 * @lc app=leetcode id=999 lang=cpp
 *
 * [999] Available Captures for Rook
 */

// @lc code=start
class Solution
{
public:
    int numRookCaptures(vector<vector<char>> &board)
    {
        int Ri = 0, Rj = 0, ans = 0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (board[i][j] == 'R')
                {
                    Ri = i;
                    Rj = j;
                    break;
                }
            }
        }
        for (int i = Ri - 1; i >= 0; i--)
        {
            if (board[i][Rj] == 'B')
                break;
            else if (board[i][Rj] == 'p')
            {
                ans++;
                break;
            }
        }
        for (int i = Ri + 1; i < 8; i++)
        {
            if (board[i][Rj] == 'B')
                break;
            else if (board[i][Rj] == 'p')
            {
                ans++;
                break;
            }
        }
        for (int j = Rj - 1; j >= 0; j--)
        {
            if (board[Ri][j] == 'B')
                break;
            else if (board[Ri][j] == 'p')
            {
                ans++;
                break;
            }
        }
        for (int j = Rj + 1; j < 8; j++)
        {
            if (board[Ri][j] == 'B')
                break;
            else if (board[Ri][j] == 'p')
            {
                ans++;
                break;
            }
        }
        return ans;
    }
};
// @lc code=end
