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
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    vector<int> v;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        mp[num]++;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    int k = 0;
    for (; k < m && !mp.empty(); k++)
    {
        int j = v[k];
        auto it = mp.lower_bound(j);
        if (it->first != j)
            --it;
        if (it == mp.end())
        {
            cout << "-1\n";
            continue;
        }
        num = it->first;
        if (num > j)
        {
            cout << "-1\n";
            continue;
        }
        int cnt = it->second;
        cout << num << "\n";
        if (cnt == 1)
            mp.erase(num);
        else
            mp[num]--;
    }
    while (k != m)
    {
        cout << "-1\n";
        k++;
    }

    return 0;
}