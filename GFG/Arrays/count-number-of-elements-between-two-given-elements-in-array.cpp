class Solution
{
public:
    int getCount(vector<int> &arr, int num1, int num2)
    {
        // Your code goes here.
        int fp = 0, lp = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == num1)
            {
                fp = i;
                break;
            }
        }
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            if (arr[i] == num2)
            {
                lp = i;
                break;
            }
        }
        if (lp < fp)
        {
            return 0;
        }
        return (lp - fp - 1);
    }
};