#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        string sn;
        char first = s[0];
        for (int i = 1; i < n; i++)
        {
            if (s[i] == first)
            {
                sn += first;
                if ((i + 1) < n)
                    first = s[i + 1];
                i++;
            }
        }

        cout << sn << endl;
    }
}