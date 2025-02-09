#include <iostream>
using namespace std;
int main()
{
    unsigned n;
    cin >> n;
    unsigned step = 0;
    while (n != 1)
    {
        if ((n % 2) == 0)
        {
            n /= 2;
            step++;
        }
        else
        {
            n = ((3 * n) + 1) / 2;
            step++;
        }
    }
    cout << step;
    return 0;
}