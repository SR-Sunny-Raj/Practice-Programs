#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        // your code goes here
        cout << ((a != b && b != c) ? "YES" : "NO") << endl;
    }
}
