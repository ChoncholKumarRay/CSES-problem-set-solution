#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int x = 1; x <= 6; x++)
        {
            if (x > i)
                break;
            dp[i] = (dp[i] + dp[i - x]) % mod;
        }
    }
    cout << dp[n];

    return 0;
}