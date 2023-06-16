// given an array. write a solution to check
// if it could become non-decreasing by
// modifying at most 1 element

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int *arr, int n)
{
    if (n <= 2)
        return 1;

    int c = 0;
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
            c++;

        if (c > 1)
            return 0;
    }

    return 1;
}

int main()
{
    int n = 10;
    int arr[] = {-41, -40, -22, -14, -14, -1, 17, 59, -130, 92};

    cout << isPossible(arr, n) << endl;
}