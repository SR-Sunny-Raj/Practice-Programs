#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int actualPrice = 0, discPrice = x;
        for (int i = 0; i < n; i++)
        {
            actualPrice += a[i];
            if (y <= a[i])
            {
                discPrice += (a[i] - y);
            }
        }
        if (discPrice < actualPrice)
        {
            cout << "COUPON" << endl;
        }
        else
        {
            cout << "NO COUPON" << endl;
        }
    }
}
