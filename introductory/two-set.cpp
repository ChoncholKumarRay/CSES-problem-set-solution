#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    long long n;
    cin >> n;

    long long sum = (n * (n + 1)) / 2;

    if (sum % 2 != 0)
    {
        cout << "NO";
        return 0;
    }
    else
    {
        cout << "YES\n";
        int cnt = 0;
        long long half = sum / 2;
        long long s = 0;
        vector<int> first;
        vector<int> second;
        int one = 0, two = 0;
        while (n > 0)
        {
            if (s + n <= half)
            {
                first.push_back(n);
                s += n;
                ++one;
            }
            else
            {
                second.push_back(n);
                ++two;
            }
            n--;
        }
        cout << one << "\n";
        for (int i = 0; i < one; i++)
        {
            cout << first[i] << " ";
        }
        cout << "\n";
        cout << two << "\n";
        for (int i = 0; i < two; i++)
        {
            cout << second[i] << " ";
        }
        cout << "\n";
    }
}