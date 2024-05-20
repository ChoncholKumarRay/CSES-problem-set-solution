#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int tc;
    cin >> tc;
    long long x, y, m, num;
    while (tc--)
    {
        cin >> y >> x;
        m = max(x, y);
        // cout << m << endl;

        if (m % 2 == 0)
        {
            if (m == x)
            {
                num = ((m - 1) * (m - 1)) + y;
            }
            if (y == m)
            {
                num = (m * m) - (x - 1);
            }
        }
        else
        {
            if (m == y)
            {
                num = ((m - 1) * (m - 1)) + x;
                // num = (m * m) - (x - 1);
            }
            if (x == m)
            {
                // num = ((m - 1) * (m - 1)) + y;
                num = (m * m) - (y - 1);
            }
        }
        cout << num << endl;
    }
    return 0;
}