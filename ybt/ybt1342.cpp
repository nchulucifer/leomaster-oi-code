#include <bits/stdc++.h>
using namespace std;
int a[105], b[105];
double mp[105][105];
int n, m, x, y, s, t;
double dis(int x1, int y1, int x2, int y2)
{
    double t = sqrt(1.0 * (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return t;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    cin >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            mp[i][j] = 1e8;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        mp[x][y] = dis(a[x], b[x], a[y], b[y]);
        mp[y][x] = mp[x][y];
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                mp[i][j] = min(mp[i][j], mp[i][k] + mp[k][j]);
    cin >> s >> t;
    printf("%.2lf", mp[s][t]);
    return 0;
}