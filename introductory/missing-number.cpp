#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
    int n, num;
    cin >> n;
    bool arr[n + 1];
    memset(arr, true, sizeof(arr));
    for (int i = 1; i < n; i++)
    {
        cin >> num;
        arr[num] = false;
    }

    ++n;
    for (int i = 1; i < n; i++)
    {
        if (arr[i])
            cout << i;
    }
    return 0;
}
