#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int size = (int)pow(2, n);
    for (int i = 0; i < size; ++i)
    {
        bitset<16> grayCode(i);
        string num = grayCode.to_string();
        cout << num.substr(num.size() - n) << endl;
    }

    return 0;
}
