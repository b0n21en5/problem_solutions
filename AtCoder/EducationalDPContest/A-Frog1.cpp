#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int st[N];
int dp[N];

// dynamic programming approach
void dynamic(int n)
{

    int sum[n + 2];

    sum[0] = 0;
    sum[1] = abs(st[1] - st[2]);

    for (int i = 2; i < n; i++)
    {
        sum[i] = min(abs(st[i] - st[i - 1]) + sum[i - 1], abs(st[i] - st[i - 2]) + sum[i - 2]);
    }

    cout << sum[n - 1] << endl;
}

// brute force recursion approach
int rec(int i)
{
    // when frog is on stone-1 cost is 0
    if (i == 0)
        return 0;

    int cost = INT_MAX;

    // way-1
    cost = min(cost, rec(i - 1) + abs(st[i] - st[i - 1]));

    // way-2
    if (i > 1)
        cost = min(cost, rec(i - 2) + abs(st[i] - st[i - 2]));

    return cost;
}

// brute force recursion approach
int dp2(int i)
{
    // when frog is on stone-1 cost is 0
    if (i == 0)
        return 0;
    if (dp[i] != -1)
        return dp[i];

    int cost = INT_MAX;

    // way-1
    cost = min(cost, rec(i - 1) + abs(st[i] - st[i - 1]));

    // way-2
    if (i > 1)
        cost = min(cost, rec(i - 2) + abs(st[i] - st[i - 2]));

    return dp[i] = cost;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> st[i];
    }

    // dynamic(n);

    cout << rec(n - 1) << endl;
    cout << dp2(n - 1) << endl;
}