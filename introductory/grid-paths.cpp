#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
using namespace std;

int visited = 0;

int p[48];
bool onPath[9][9];
int dr[4] = {-1, 0, 1, 0}; // for left & right turn
int dc[4] = {0, 1, 0, -1}; // for down & up turn

int tryPath(int pathInd, int startR, int startC);

int main()
{
    fast;
    string paths;
    cin >> paths;

    for (int i = 0; i < 48; i++)
    {
        char cur = paths[i];
        if (cur == 'U')
        {
            p[i] = 0;
        }
        else if (cur == 'R')
        {
            p[i] = 1;
        }
        else if (cur == 'D')
        {
            p[i] = 2;
        }
        else if (cur == 'L')
        {
            p[i] = 3;
        }
        else
        {
            p[i] = 4;
        }
    }

    // setting the border
    for (int i = 0; i < 9; i++)
    {
        onPath[0][i] = true;
        onPath[8][i] = true;
        onPath[i][0] = true;
        onPath[i][8] = true;
    }

    // setting all other 7x7 cell as blank
    for (int i = 1; i <= 7; i++)
        for (int j = 1; j <= 7; j++)
            onPath[i][j] = false;

    int startInd = 0;
    int startR = 1;
    int startC = 1;
    int ans = tryPath(startInd, startR, startC);
    cout << ans << endl;

    // cout << visited << endl;

    // for (int i = 0; i < 9; i++)
    // {
    //     for (int j = 0; j < 9; j++)
    //     {
    //         if (onPath[i][j])
    //             cout << '#';
    //         else
    //             cout << '*';
    //     }
    //     cout << endl;
    // }

    return 0;
}

int tryPath(int pathInd, int curR, int curC)
{
    // visited += 1;
    //  left & right block bt up & down open = dead-end/split
    if ((onPath[curR][curC - 1] && onPath[curR][curC + 1]) && (!onPath[curR - 1][curC] && !onPath[curR + 1][curC]))
        return 0;

    // left & right open but up & down block = dead-end/split
    if ((!onPath[curR][curC - 1] && !onPath[curR][curC + 1]) && (onPath[curR - 1][curC] && onPath[curR + 1][curC]))
        return 0;

    // Reaching the end-point
    if (curR == 7 && curC == 1)
    {
        if (pathInd == 48) // last turn reach end point
            return 1;
        return 0; // pre-mature end-point :)
    }

    if (pathInd == 48) // all turn is gone
        return 0;

    int ret = 0;
    onPath[curR][curC] = true; // mark current cell as visited

    if (p[pathInd] < 4)
    {
        int nxtR = curR + dr[p[pathInd]];
        int nxtC = curC + dc[p[pathInd]];

        if (!onPath[nxtR][nxtC])
            ret += tryPath(pathInd + 1, nxtR, nxtC);
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            int nxtR = curR + dr[i];
            int nxtC = curC + dc[i];

            if (onPath[nxtR][nxtC])
                continue;
            ret += tryPath(pathInd + 1, nxtR, nxtC);
        }
    }

    // reset and return
    onPath[curR][curC] = false;
    return ret;
}