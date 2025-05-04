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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // your code goes here
        int minValue = a[0], count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < minValue)
            {
                minValue = a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] > minValue)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}
