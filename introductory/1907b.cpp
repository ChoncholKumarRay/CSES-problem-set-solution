#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin.tie(NULL);
        string str;
        cin >> str;
        stack<long long> small;
        stack<long long> capital;
        map<long long, char> m;
        long long len = str.length();
        long long ind;
        char ch;
        for (long long i = 0; i < len; i++)
        {
            ch = str[i];
            if (ch == 'b')
            {
                if (!small.empty())
                {
                    ind = small.top();
                    small.pop();
                    m[ind] = '#';
                }
                continue;
            }
            if (ch == 'B')
            {
                if (!capital.empty())
                {
                    ind = capital.top();
                    capital.pop();
                    m[ind] = '#';
                }
                continue;
            }
            if (ch >= 'a' && ch <= 'z')
            {
                small.push(i);
                m[i] = ch;
            }
            else if (ch >= 'A' && ch <= 'Z')
            {
                capital.push(i);
                m[i] = ch;
            }
        }
        for (long long i = 0; i < len; i++)
        {
            if (m.count(i) and m[i] != '#')
                cout << m[i];
        }
        cout << endl;
    }
    return 0;
}