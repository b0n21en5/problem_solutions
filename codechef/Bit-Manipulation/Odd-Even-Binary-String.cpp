#include <iostream>
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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            // it'll store 1 if odd and 0 if even
            count = count ^ a[i];
        }

        // (n & 1) will return 0 if even & 1 if n is odd
        if ((n & 1) == count)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}