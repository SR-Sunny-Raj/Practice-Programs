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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        long long happyDay = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == b[i]) || (a[i] < b[i] && (a[i] * 2) >= b[i]) || (a[i] > b[i] && (b[i] * 2) >= a[i]))
            {
                happyDay++;
            }
        }
        cout << happyDay << endl;
    }
}
