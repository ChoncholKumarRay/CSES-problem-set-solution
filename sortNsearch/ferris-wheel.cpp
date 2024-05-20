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
    ll n, x;
    cin >> n >> x;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);

    ll j = 0, k = n - 1;
    ll sum = 0, cnt = 0;
    while (j < k)
    {
        sum = arr[j] + arr[k];
        if (sum > x)
        {
            cnt++;
            k--;
        }
        else
        {
            cnt++;
            j++;
            k--;
        }
    }
    if (j == k)
        cnt++;
    cout << cnt << endl;

    return 0;
}