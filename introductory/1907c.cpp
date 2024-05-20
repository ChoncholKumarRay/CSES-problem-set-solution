#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int len;
        string str;
        cin >> len;
        cin >> str;
        cin.tie(NULL);
        map<char, int> mp;
        priority_queue<int> pq;

        for (char ch : str)
            mp[ch]++;
        for (const auto &pair : mp)
            pq.push(pair.second);
        while (pq.size() > 1)
        {
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            // cout << first << " " << second << endl;
            if (--first)
                pq.push(first);
            if (--second)
                pq.push(second);
        }

        if (pq.empty())
            cout << 0 << endl;
        else
            cout << pq.top() << endl;
    }
}

/*
10
4
aabc
5
abaca
10
avbvvcvvvd
7
abcdefg
5
dabbb
8
aacebeaa
7
bbbbacc
6
dacfcc
6
fdfcdc
9
dbdcfbbdc
*/

/*
0
1
2
1
1
0
1
0
0
1
*/
