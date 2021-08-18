#include <bits/stdc++.h>
using namespace std;
int a[25][25];
int n, x, y, t;
int main()
{
    cin >> n;
    x = 0;
    y = n;
    while (t < n * n)
    {
        while (a[x + 1][y] == 0 && x + 1 <= n)
        {
            x++;
            t++;
            a[x][y] = t;
        }
        while (a[x][y - 1] == 0 && y - 1 >= 1)
        {
            y--;
            t++;
            a[x][y] = t;
        }
        while (a[x - 1][y] == 0 && x - 1 >= 1)
        {
            x--;
            t++;
            a[x][y] = t;
        }
        while (a[x][y + 1] == 0 && y + 1 <= n)
        {
            y++;
            t++;
            a[x][y] = t;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}