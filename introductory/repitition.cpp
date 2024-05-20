#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string str;
    cin >> str;
    int len = str.length();
    int count = 0, init = 0;
    char flag;
    vector<int> v;
    for (int i = 0; i < len; i++)
    {
        if (init == 0)
        {
            flag = str[i];
            count++;
            init = 1;
        }
        else
        {
            if (flag == str[i])
                count++;
            else
            {
                // v.push_back(make_pair(count, flag));
                flag = str[i];
                v.push_back(count);
                count = 1;
            }
        }
    }
    v.push_back(count);
    cout << *max_element(v.begin(), v.end());
    return 0;
}