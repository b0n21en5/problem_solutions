#include <iostream>
#include <limits.h>
#include <string.h>
using namespace std;
const int N = 1e5 + 10;

int k;
int sum[N];

int st[N];

int dp(int i)
{
    if (i == 0)
        return 0;
    if (sum[i] != -1)
        return sum[i];

    int cost = INT_MAX;
    for (int j = 1; j <= k; ++j)
    {
        if (i - j >= 0)
            cost = min(cost, dp(i - j) + abs(st[i] - st[i - j]));
    }
    return sum[i] = cost;
}

int main()
{
    memset(sum, -1, sizeof(sum));
    int n;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> st[i];

    cout << dp(n - 1) << endl;
}