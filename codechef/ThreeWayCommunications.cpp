// formula of distance in co-ordinate geomatry is used

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, x1, x2, x3, y1, y2, y3;
        cin >> r >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        int d12 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int d13 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
        int d23 = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);

        int mxd1 = max(d12, d13);
        int mxd2 = max(d12, d23);
        int mxd3 = max(d13, d23);

        int minMaxDist = min({mxd1, mxd2, mxd3});

        if (minMaxDist <= r * r)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
