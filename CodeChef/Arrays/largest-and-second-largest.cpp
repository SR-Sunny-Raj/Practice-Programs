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
        long long largest = INT_MIN, secondLargest = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > largest)
            {
                secondLargest = largest;
                largest = a[i];
            }
            if (a[i] > secondLargest && a[i] != largest)
            {
                secondLargest = a[i];
            }
        }
        cout << (largest + secondLargest) << endl;
    }
}
