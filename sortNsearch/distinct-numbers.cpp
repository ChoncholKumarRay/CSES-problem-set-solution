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

    ll n;
    cin >> n;
    ll num;
    set<ll> s;
    while (n--)
    {
        cin >> num;
        s.insert(num);
    }
    cout << s.size() << endl;

    return 0;
}