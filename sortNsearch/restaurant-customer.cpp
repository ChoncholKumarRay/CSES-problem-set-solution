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
    int n;
    cin >> n;
    int a, b;
    map<int, int> mp;
    map<int, int> res;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        mp[a] = 1;
        mp[b] = -1;
    }

    int cnt = 0;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cnt += it->second;
        res[cnt] = 1;
    }
    auto it = res.rbegin();
    cout << it->first;
}