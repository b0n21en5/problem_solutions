// given an array task is to rotate
// the array to the left by k steps

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;

    for (int i = k; i < n; i++)
        cout << a[i] << " ";

    int j = 0;
    while (j < k)
    {
        cout << a[j] << " ";
        j++;
    }

    return 0;
}