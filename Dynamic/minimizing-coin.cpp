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
    int n, m;
    cin >> n >> m;
    vector<int> coin(n);
    for (int i = 0; i < n; i++)
        cin >> coin[i];
    sort(coin.begin(), coin.end());

    vector<int> dp(m + 1, 0);

    dp[0] = 1;
    for (int i = 1; i <= m; i++)
    {
    }
    cout << dp[m] << endl;

    return 0;
}