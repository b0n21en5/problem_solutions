#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define frn(i, a) for (ll i = 0; i < a; i++)
#define sz(x) (x).size()

void eq()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    set<char> s;
    frn(i, n)
    {
        if (b[i] != a[i])
            s.insert(b[i]);
    }

    cout << sz(s) << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        eq();
    }
}