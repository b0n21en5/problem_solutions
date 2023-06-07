// ENCMSG - Encoding Message

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

        for (int i = 0; i < n - 1; i += 2)
            swap(s[i], s[i + 1]);

        string sn;
        for (int i = 0; i < n; i++)
        {
            int ind = 122 - abs(97 - s[i]);
            sn += ind;
        }
        cout << sn << endl;
    }
}