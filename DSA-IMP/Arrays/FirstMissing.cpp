// u are given an array find the
// first missing positive integer

#include <bits/stdc++.h>
using namespace std;

int firstMissing(int arr[], int n)
{
    sort(arr, arr + n);

    set<int> a;
    for (int i = 0; i < n; i++)
        if (arr[i] > 0)
            a.insert(arr[i]);

    int i = 1;
    for (auto it : a)
    {
        if (i != it)
        {
            return i;
        }
        i++;
    }

    return i;
}

int main()
{
    int n = 5;
    int arr[] = {3, 2, -6, 1, 0};

    cout << firstMissing(arr, n);
}