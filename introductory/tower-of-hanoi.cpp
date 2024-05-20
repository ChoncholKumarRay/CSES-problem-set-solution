#include <bits/stdc++.h>
using namespace std;

/*
@brief Solve tower of hanoi. Here the function is valid for the tower have integer value to describe.
@param n = number of disks
@param left = from where you want to move
@param middle = the via for moving disk
@param right = at where you want to move
@return void
*/
void hanoi(int n, int left, int middle, int right)
{
    if (n == 0)
        return;
    hanoi(n - 1, left, right, middle);
    cout << left << " " << right << endl;
    hanoi(n - 1, middle, left, right);
}

int main(void)
{
    int n;
    cin >> n;
    cout << (int)pow(2, n) - 1 << endl;
    hanoi(n, 1, 2, 3);
}