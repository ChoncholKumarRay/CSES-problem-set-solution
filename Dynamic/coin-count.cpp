#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main()
{
    fast;
    int t, n;
    int mod = 1000000007;
    cin >> t >> n;
    int coins[t];
    for (auto &c : coins)
        cin >> c;
    int count[n + 1];
    for (int i = 0; i <= n; i++)
        count[i] = 0;
    count[0] = 1;
    for (int x = 1; x <= n; x++)
    {
        for (auto c : coins)
        {
            if (x - c >= 0)
            {
                count[x] += count[x - c];
                count[x] %= mod;
            }
        }
    }
    cout << count[n] << endl;

    return 0;
}