#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n, x;
    cin >> n;
    cin >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "YES";
            break;
        }
        if (i == n - 1 && arr[i] != x)
        {
            cout << "NO";
        }
    }
}
