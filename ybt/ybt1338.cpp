#include <iostream>
#include <cstdio>
using namespace std;
int a[105];
int g[105][105];
int n, x, y, sum;
int maxn = 0x3f3f3f3f;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            g[i][j] = maxn;
    for (int i = 1; i <= n; i++)
        g[i][i] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> x >> y;
        if (x > 0)
            g[i][x] = g[x][i] = 1;
        if (y > 0)
            g[i][y] = g[y][i] = 1;
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
    int ans = maxn;
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        for (int j = 1; j <= n; j++)
            sum += g[i][j] * a[j];
        ans = min(ans, sum);
    }
    cout << ans << endl;
    return 0;
}