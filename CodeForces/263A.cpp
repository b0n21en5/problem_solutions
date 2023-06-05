// 263A - Beautiful Matrix

#include <iostream>
using namespace std;

int main()
{
    int row = 0, col = 0;
    for (int i = 1; i <= 5; i++)
    {
        int n;
        for (int j = 1; j <= 5; j++)
        {

            cin >> n;
            if (n)
            {
                row = i;
                col = j;
            }
        }
    }

    if (row > 3)
        row -= 3;
    else if (row < 3)
        row = 3 - row;
    else
        row = 0;

    if (col > 3)
        col -= 3;
    else if (col < 3)
        col = 3 - col;
    else
        col = 0;

    cout << col + row << endl;
}
