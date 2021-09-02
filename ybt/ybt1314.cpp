#include <bits/stdc++.h>
using namespace std;
int gox[] = {0, 1, 1, -1, -1, 2, 2, -2, -2};
int goy[] = {0, 2, -2, 2, -2, 1, -1, 1, -1};
long long a[25][25];
bool vis[25][25];
int n, m, x, y;
int main()
{
    cin >> n >> m >> x >> y;
    for (int i = 0; i <= 8; i++)
    {
        int xx = x + gox[i];
        int yy = y + goy[i];
        if (xx >= 0 && xx <= n && yy >= 0 && yy <= m)
            vis[xx][yy] = 1;
    }
    a[0][0] = 1;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++)
        {
            if (vis[i][j])
                a[i][j] = 0;
            else if (i == 0 && j != 0)
                a[i][j] = a[i][j - 1];
            else if (i != 0 && j == 0)
                a[i][j] = a[i - 1][j];
            else if (i != 0 && j != 0)
                a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    cout << a[n][m] << endl;
    return 0;
}