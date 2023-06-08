// EPANLINK - efficient pan linking

#include <iostream>
using namespace std;

// header files for int1024_t
#include <boost/multiprecision/cpp_int.hpp>
#define ll long long
using namespace boost::multiprecision;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // data type for big integers
        int1024_t n;
        cin >> n;

        cout << n % 20 << endl;
    }
    return 0;
}
