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
    ll n, m, k;
    cin >> n >> m >> k;
    priority_queue<ll> applicant;
    priority_queue<ll> room;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        applicant.push(a);
    }
    for (ll i = 0; i < m; i++)
    {
        ll a;
        cin >> a;
        room.push(a);
    }
    ll ans = 0;
    while (!room.empty() && !applicant.empty())
    {
        ll a = applicant.top();
        ll b = room.top();

        if (a - k <= b && b <= a + k)
        {
            // cout << a << " " << b << endl;
            applicant.pop();
            room.pop();
            ++ans;
        }
        else if ((a + k) < b)
        {
            room.pop();
        }
        else
            applicant.pop();
    }
    cout << ans << endl;

    return 0;
}