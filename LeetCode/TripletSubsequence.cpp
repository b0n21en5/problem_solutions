#include <bits/stdc++.h>
using namespace std;

bool increasingTriplet(int nums[], int n)
{
    int firstValue = INT_MAX;
    int secondValue = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= firstValue)
        {
            firstValue = nums[i];
        }
        else if (nums[i] <= secondValue)
        {
            secondValue = nums[i];
        }
        else
        {
            return true;
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << increasingTriplet(nums, n);
}