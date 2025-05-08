#include <bits/stdc++.h>
using namespace std;

int main()
{
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
        // your code goes here
        int i = 0;
        for (i; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << "NO" << endl;
                break;
            }
        }
        if (i == n - 1)
        {
            cout << "YES" << endl;
        }
    }
}
