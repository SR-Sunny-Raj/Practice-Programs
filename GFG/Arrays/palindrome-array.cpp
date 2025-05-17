//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    bool isPerfect(vector<int> &arr)
    {
        // code here
        int firstPointer = 0, lastPointer = arr.size() - 1;
        while (firstPointer++ < lastPointer--)
        {
            if (arr[firstPointer] != arr[lastPointer])
                return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num)
        {
            nums.push_back(num);
        }

        Solution obj;
        bool res = obj.isPerfect(nums);

        if (res)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
}

// } Driver Code Ends