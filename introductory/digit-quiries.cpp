#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        long long num;
        cin >> num;
        // cout << num << endl;

        long long len = 1;
        long long count = 9;
        long long width = 9;
        long long start = 0;

        while (1)
        {
            if (num > count)
            {
                len++;
                num -= count;
                count = width * 10 * len;
                start += width;
                width *= 10;
                // cout << num << endl;
                // cout << count << endl;
            }
            else
                break;
        }
        //--start;
        long long number = start + (num / len);
        if (num % len != 0)
        {
            ++number;
            char digit = to_string(number)[(num % len) - 1];
            cout << digit << endl;
        }
        else
        {
            char digit = to_string(number)[len - 1];
            cout << digit << endl;
        }
        // cout << start << endl;
        // cout << num << endl;
        // cout << len << endl;
        // cout << number << endl;
    }
    return 0;
}