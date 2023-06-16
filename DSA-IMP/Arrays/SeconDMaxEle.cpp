// You have been given an array, you need to
// find the second largest element in that

#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(int n, vector<int> &arr)
{
    if (n < 1)
        return 0;

    set<int, greater<int>> st;
    for (auto x : arr)
        st.insert(x);

    if (st.size() == 1)
        return -1;

    int i = 1;
    for (auto itr : st)
    {

        if (i == 2 && itr)
            return itr;

        i++;
    }
}

int main()
{
    vector<int> arr;
    int n = 5;

    arr.push_back(65);
    arr.push_back(15);
    arr.push_back(30);
    arr.push_back(12);
    arr.push_back(40);

    cout << findSecondLargest(n, arr) << endl;
}