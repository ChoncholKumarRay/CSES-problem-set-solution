// Modified Code
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000007
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int cnt = 0;
int taka[100000];

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
            if (i - c >= 0 && v[i - c] + 1 < v[i])
            {
                v[i] = v[i - c] + 1;
                taka[i] = c;
                cnt++;
            }
        }
    }

    cout << v[x];
    cout << endl
         << cnt << endl;

    int j = x;
    while (j > 0)
    {
        cout << taka[j] << " ";
        j -= taka[j];
    }
    cout << endl;

    return 0;
}