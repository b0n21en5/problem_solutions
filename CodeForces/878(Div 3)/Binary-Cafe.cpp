#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        n++;
        k = min(k, 30);
        cout << min(n, ((1 << k) - 1) + 1) << endl;
    }
}