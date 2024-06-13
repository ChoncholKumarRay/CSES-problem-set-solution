#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int inf = 10000000;

int recur_cnt = 0;

int solve(int x, int coins[], int n)
{
    if (x < 0)
        return inf;
    else if (x == 0)
        return 0;
    int best = inf;
    for (int i = 0; i < n; i++)
    {
        int c = coins[i];
        if (x - c >= 0)
        {
            best = min(best, solve(x - c, coins, n) + 1);
            // cout << "for taka: " << x << "\t coins: " << c << "\t best: " << best << endl;
            recur_cnt++;
        }
    }
    return best;
}

int main()
{
    fast;
    int n, x;
    cin >> n >> x;
    int coins[n];
    for (auto &c : coins)
        cin >> c;
    cout << solve(x, coins, n) << endl;
    cout << recur_cnt << endl;

    return 0;
}