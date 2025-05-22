// User function template for C++
class Solution
{
public:
    vector<int> getMoreAndLess(vector<int> &arr, int target)
    {
        // code here
        int i = 0, j = arr.size() - 1, countLessEqual = 0, countGreaterEqual = 0;
        while ((arr[i] <= target || arr[j] >= target) && (i <= arr.size() - 1) && (j >= 0))
        {
            if (arr[i] <= target)
            {
                countLessEqual++;
                i++;
            }
            if (arr[j] >= target)
            {
                countGreaterEqual++;
                j--;
            }
        }
        vector<int> res;
        res.push_back(countLessEqual);
        res.push_back(countGreaterEqual);
        return res;
    }
};