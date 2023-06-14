// CODECHEF STREAK

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        int om = 0, addy = 0, mxOm = -555, mxAddy = -555;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= 1)
                om++;
            else
                om = 0;
            if (om > mxOm)
                mxOm = om;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] >= 1)
                addy++;
            else
                addy = 0;
            if (addy > mxAddy)
                mxAddy = addy;
        }

        string ans = "Draw";
        if (mxAddy > mxOm)
            ans = "Addy";
        else if (mxAddy < mxOm)
            ans = "Om";

        cout << ans << endl;
    }
    return 0;
}
