#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        // your code goes here
        if (x >= y)
        {
            cout << y << endl;
        }
        else
        {
            cout << (x + ((y - x) * 2)) << endl;
        }
    }
}
