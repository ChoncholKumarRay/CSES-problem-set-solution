#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        multiset<int> ms;
        long long arr[n];
        // bool flagMultiple = true;
        bool flagSort = true;
        int temp = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (temp > arr[i])
            {
                flagSort = false;
                // cout << 3 << endl;
            }

            temp = arr[i];
        }

        if (flagSort)
        {
            cout << "YES" << endl;
            continue;
        }
        if (k == 1 && flagSort == false)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}