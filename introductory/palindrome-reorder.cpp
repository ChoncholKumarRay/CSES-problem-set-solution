#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string str;
    cin >> str;
    int len = str.length();
    multiset<char> ms;
    set<char> s;
    vector<char> v;
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        ms.insert(str[i]);
        s.insert(str[i]);
    }
    bool flag = true;
    char extra = '#';
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        char element = *it;
        cnt = ms.count(element);
        if (cnt % 2 != 0)
        {
            if (flag)
            {
                flag = false;
                extra = element;
            }
            else
            {
                cout << "NO SOLUTION";
                return 0;
            }
        }
        for (int i = 0; i < cnt / 2; i++)
        {
            v.push_back(element);
        }
    }
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it;
    }
    if (extra != '#')
    {
        cout << extra;
    }
    for (auto it = v.rbegin(); it != v.rend(); ++it)
    {
        cout << *it;
    }
    return 0;
}