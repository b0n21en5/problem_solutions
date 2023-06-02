#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {

        string str;
        cin >> str;
        int ln = str.size();
        if (ln > 10)
        {
            cout << str[0] << (ln - 2) << str[ln - 1] << endl;
        }
        else
        {
            cout << str << endl;
        }
    }
}