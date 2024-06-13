#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int main()
{
    fast;
    int n, x;
    int inf = 10000000;
    cin >> n >> x;
    vector<int> coins(n), v(x + 1);
    for (auto &c : coins)
        cin >> c;
    v[0] = 0;
    for (int i = 1; i <= x; i++)
    {
        v[i] = inf;
        for (auto c : coins)
        {
            if (i - c >= 0)
                v[i] = min(v[i], v[i - c] + 1);
        }
    }

    cout << v[x];

    return 0;
}