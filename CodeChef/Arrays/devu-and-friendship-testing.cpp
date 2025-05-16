#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        unordered_set<int> res;
        for (int i = 0; i < n; i++)
        {
            res.insert(arr[i]);
        }
        cout << res.size() << endl;
    }
}
