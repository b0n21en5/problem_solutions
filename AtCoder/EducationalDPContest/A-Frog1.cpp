#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;

int st[N];

int dpArr[N];

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

// dynamic programming approach
int dpApp(int i)
{
    // when frog is on stone-1 cost is 0
    if (i == 0)
        return 0;

    // returning sum value from dynamic array
    if (dpArr[i] != -1)
        return dpArr[i];

    int cost = INT_MAX;

    // way-1
    cost = min(cost, dpApp(i - 1) + abs(st[i] - st[i - 1]));

    // way-2
    if (i > 1)
        cost = min(cost, dpApp(i - 2) + abs(st[i] - st[i - 2]));

    // adding absolute differences in dynamic array
    return dpArr[i] = cost;
}

int main()
{
    memset(dpArr, -1, sizeof(dpArr));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> st[i];
    }

    cout << rec(n - 1) << endl;
    cout << dpApp(n - 1) << endl;
}