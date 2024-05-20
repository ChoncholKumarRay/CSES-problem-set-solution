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
    int n;
    cin >> n;
    ll a, b;
    map<ll, ll> mp;
    while (n--)
    {
        cin >> a >> b;
        ++b;
        while (a < b)
        {
            mp[a]++;
            a++;
        }
    }
    ll m = INT_MIN;
    for (auto it = mp.begin(); it != mp.end(); ++it)
        m = max(m, it->second);

    cout << m;

    return 0;
}