#include <bits/stdc++.h>
using namespace std;

long long findMinimum(long long *arr, long long cursum, long long totalSum, int i)
{
    if (i == 0)
        return abs(totalSum - (2 * cursum));
    return min(findMinimum(arr, cursum + arr[i], totalSum, i - 1), findMinimum(arr, cursum, totalSum, i - 1));
}

int main(void)
{
    int n;
    cin >> n;
    long long arr[n];
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << findMinimum(arr, 0, sum, n - 1);
    return 0;
}