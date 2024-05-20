#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    vector<string> permutations;
    do
    {
        permutations.push_back(str);
    } while (next_permutation(str.begin(), str.end()));

    cout << permutations.size() << endl;

    for (const string &s : permutations)
        cout << s << endl;

    return 0;
}