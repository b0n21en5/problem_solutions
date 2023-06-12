#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        priority_queue<pair<int, int>> mv;
        while (n--)
        {
            int si, ri;
            cin >> si >> ri;
            mv.push(make_pair(ri, si));
        }

        int ans = 0;
        while (!mv.empty())
        {

            int sz = mv.top().second;

            if (sz <= x)
            {
                ans = mv.top().first;
                break;
            }
            mv.pop();
        }

        cout << ans << endl;
    }
    return 0;
}
