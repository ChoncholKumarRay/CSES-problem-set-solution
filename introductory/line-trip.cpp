#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int station, destination;
        cin >> station >> destination;
        int prev, present, max_d, d;
        prev = 0;
        max_d = 0;
        for (int i = 0; i < station; i++)
        {
            cin >> present;
            d = present - prev;
            prev = present;
            max_d = max(max_d, d);
        }
        d = 2 * (destination - present);
        cout << max(max_d, d) << endl;
    }
    return 0;
}