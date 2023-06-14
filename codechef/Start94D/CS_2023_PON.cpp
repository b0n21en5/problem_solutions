// POSSIBLE OR NOT

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, b;
        cin >> n >> b;
        int a[n];
        int bit = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if ((a[i] & b) == b)
                bit &= a[i];
        }

        if (bit == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}