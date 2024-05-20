#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n;
    cin >> n;
    long long result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= 2;
        result %= 1000000007;
    }
    cout << result << endl;
}