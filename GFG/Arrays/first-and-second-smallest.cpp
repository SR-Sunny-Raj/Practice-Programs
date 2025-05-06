//{ Driver Code Starts
#include <bits/stdc++.h>
#include <limits.h>
#include <random>
#include <sstream>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    vector<int> minAnd2ndMin(vector<int> &arr)
    {
        // code here
        vector<int> res;
        int smallest = INT_MAX, secondSmallest = INT_MAX;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] < smallest)
            {
                secondSmallest = smallest;
                smallest = arr[i];
            }
            if (arr[i] < secondSmallest && arr[i] != smallest)
            {
                secondSmallest = arr[i];
            }
        }
        if (smallest == INT_MAX || secondSmallest == INT_MAX)
        {
            res.push_back(-1);
        }
        else
        {
            res.push_back(smallest);
            res.push_back(secondSmallest);
        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.minAnd2ndMin(arr);
        if (ans[0] == -1)
            cout << -1 << endl;
        else
            cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends