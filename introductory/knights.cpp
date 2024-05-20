#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long long k;

    for (k = 1; k <= n; k++)
    {
        long long total_place = (k * k);
        long long total_ways = (1LL * total_place * (total_place - 1)) / 2;
        long long attacking_ways = 4LL * (k - 1) * (k - 2);
        cout << total_ways - attacking_ways << "\n";
    }

    return 0;
}
