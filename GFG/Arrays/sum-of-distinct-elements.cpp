// User function template for C++
class Solution
{
public:
    int findSum(vector<int> &arr)
    {
        // code here
        unordered_set<int> us;
        for (int i = 0; i < arr.size(); i++)
        {
            us.insert(arr[i]);
        }
        int ans = 0;
        for (auto x : us)
        {
            ans += x;
        }
        return ans;
    }
};