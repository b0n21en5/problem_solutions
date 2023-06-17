// find the equilibrium Index where sum
// of left & right array becomes equal

// Time complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

int findEquilibriumIndex(vector<int> &arr)
{

    int sum = 0, n = arr.size();
    for (int i = 1; i < n; i++)
        sum += arr[i];

    int chk = arr[0];
    for (int i = 1; i < n; i++)
    {
        sum -= arr[i];

        if (sum == chk && sum)
            return i;
        else if (sum == chk && sum == 0)
            return 0;

        chk += arr[i];
    }

    return -1;
}

int main()
{
    vector<int> arr = {1, 7, 3, 6, 5, 6};

    cout << findEquilibriumIndex(arr);
}