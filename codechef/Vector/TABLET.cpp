// problem code - TABLET ( buying new tablet)
//

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
        vector<int> ct;
        while (n--)
        {
            int w, h, p;
            cin >> w >> h >> p;
            if (p <= b)
            {
                w *= h;
                ct.push_back(w);
            }
        }
        sort(ct.begin(), ct.end());
        int sz = ct.size();
        if (!sz)
            cout << "no tablet\n";
        else
        {
            cout << ct[sz - 1] << endl;
        }
    }
    return 0;
}