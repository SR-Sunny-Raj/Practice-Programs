//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int maxProfit(int m, vector<int> &arr)
    {
        // Your code goes here.
        sort(arr.begin(), arr.end());
        int i = 0, profit = 0;
        while (m > 0)
        {
            if (arr[i] < 0)
            {
                profit -= arr[i];
            }
            else
            {
                break;
            }
            m--;
            i++;
        }
        return profit;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        int num;
        while (ss >> num)
        {
            arr.push_back(num);
        }
        Solution ob;
        cout << ob.maxProfit(k, arr) << endl;
        cout << "~\n";
    }
    return 0;
}

// } Driver Code Ends