#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int queen[20];
int column[20], diagonal1[40], diagonal2[40];
bool block[20][20];

void nqueen(int at, int n);
int cnt = 0;
int main()
{
    fast;
    cnt = 0;
    for (int i = 0; i < 20; i++)
        queen[i] = 0;
    for (int i = 0; i < 40; i++)
    {
        diagonal1[i] = 0;
        diagonal2[i] = 0;
    }
    // string str;

    for (int i = 0; i < 8; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < 8; j++)
        {
            if (str[j] == '*')
            {
                block[i + 1][j + 1] = true;
            }
        }
    }

    nqueen(1, 8);
    cout << cnt << endl;

    return 0;
}

void nqueen(int at, int n)
{
    if (at == n + 1)
    {

        for (int i = 1; i <= n; i++)
        {
            if (block[i][queen[i]])
                return;
        }
        ++cnt;
        // flag += 1;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (column[i] || diagonal1[i + at] || diagonal2[n + i - at])
            continue;
        queen[at] = i;

        column[i] = diagonal1[i + at] = diagonal2[n + i - at] = 1;
        nqueen(at + 1, n);
        column[i] = diagonal1[i + at] = diagonal2[n + i - at] = 0;
    }
}
