#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int num[n + 1];
    int prev;
    cin >> prev;
    long long count = 0;
    if (n == 1)
    {
        cout << "0\n";
        return 0;
    }
    for (int i = 1; i < n; i++)
    {
        cin >> num[i];
        if (num[i] < prev)
            count += prev - num[i];
        else
            prev = num[i];
    }
    cout << count;

    return 0;
}