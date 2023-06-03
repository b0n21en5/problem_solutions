// transform the algebraic expression into Reverse Polish Notation

#include <iostream>
using namespace std;

int main()
{
    int t, n, i, top;
    cin >> t;

    // stack pointer
    char *sym;
    while (t--)
    {
        string s;
        cin >> s;
        n = s.size();

        // stack declaration
        sym = new char[n];
        top = 0;
        sym[top] = '(';
        for (i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
            {
                top++;
                sym[top] = s[i];
            }
            else if (s[i] == ')')
            {
                if (sym[top] == '(')
                {
                    top--;
                }
                else
                {
                    while (sym[top] != '(')
                    {
                        cout << sym[top];
                        top--;
                    }
                    top--;
                }
            }
            else
            {
                cout << s[i];
            }
        }
        while (sym[top] != '(')
        {
            cout << sym[top];
            top--;
        }

        cout << endl;
    }
}