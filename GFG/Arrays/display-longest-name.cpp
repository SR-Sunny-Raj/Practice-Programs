//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    string longest(vector<string> &arr)
    {
        // code here
        string ans = arr[0];
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i].length() > ans.length())
            {
                ans = arr[i];
            }
        }
        return ans;
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
        vector<string> names;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        string str;
        while (ss1 >> str)
        {
            names.push_back(str);
        }
        Solution obj;
        string res = obj.longest(names);
        cout << res << "\n~\n";
    }
}

// } Driver Code Ends