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
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
            {
                if (arr[i] != arr[i + 1])
                {
                    cout << arr[i] << endl;
                    break;
                }
                else if (arr[i] == arr[i + 1])
                {
                    i += 1;
                }
            }
            else
            {
                cout << arr[n - 1] << endl;
            }
        }
    }
}
