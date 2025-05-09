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
        string s;
        cin >> s;
        // your code goes here
        for (int i = 0; i < n - 1; i += 2)
        {
            if (s[i] == '0')
            {
                if (s[i + 1] == '0')
                {
                    cout << "A";
                }
                else if (s[i + 1] == '1')
                {
                    cout << "T";
                }
            }
            else if (s[i] == '1')
            {
                if (s[i + 1] == '0')
                {
                    cout << "C";
                }
                else if (s[i + 1] == '1')
                {
                    cout << "G";
                }
            }
        }
        cout << endl;
    }
}
