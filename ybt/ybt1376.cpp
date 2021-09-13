#include <bits/stdc++.h>
using namespace std;
int f[105][105];
int n, m, x, y, z;
int main()
{
    cin >> n >> m;
    memset(f, 0x3f, sizeof(f));
    for (int i = 1; i <= n; i++)
        f[i][i] = 0;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y >> z;
        f[x][y] = min(f[x][y], z);
        f[y][x] = min(f[y][x], z);
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (f[1][i] == 0x3f3f3f3f)
        {
            ans = -1;
            break;
        }
        else
            ans = max(ans, f[1][i]);
    cout << ans << endl;
    return 0;
}