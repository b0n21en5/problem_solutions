#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        priority_queue<int, vector<int>> pq;
        while (n--)
        {
            int mi, li;
            cin >> mi >> li;

            if (li == l)
                pq.push(mi);
        }
        if (pq.size() < k)
        {
            cout << -1 << endl;
            continue;
        }

        int ans = 0;
        while (k--)
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}