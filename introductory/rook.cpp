#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin.tie(NULL);
        string block;
        cin >> block;
        // cout << block << endl;
        char letter = block[0];
        int number = (int)block[1] - '0';
        for (int i = 1; i < 9; i++)
        {
            if (i == number)
                continue;
            cout << letter << i << endl;
        }
        for (char ch = 'a'; ch < 'i'; ch++)
        {
            if (ch == letter)
                continue;
            cout << ch << number << endl;
        }
    }
    return 0;
}