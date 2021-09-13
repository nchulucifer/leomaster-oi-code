#include <bits/stdc++.h>
using namespace std;
int g[2505][2505];
int dis[2505];
bool vis[2505];
int n, m, x, y, z, t, ts, te, td;
void Dijkstra()
{
    memset(dis, 0x3f, sizeof(dis));
    dis[ts] = 0;
    vis[ts] = 1;
    for (int i = 1; i <= n; i++)
        dis[i] = min(dis[i], g[ts][i]);
    for (int i = 1; i <= n - 1; i++)
    {
        t = -1;
        td = 0x3f3f3f3f;
        for (int j = 1; j <= n; j++)
        {
            if (dis[j] < td && vis[j] == 0)
            {
                td = dis[j];
                t = j;
            }
        }
        if (t != -1)
        {
            vis[t] = 1;
            for (int j = 1; j <= n; j++)
                dis[j] = min(dis[j], dis[t] + g[t][j]);
        }
    }
}
int main()
{
    scanf("%d%d%d%d", &n, &m, &ts, &te);
    memset(g, 0x3f, sizeof(g));
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d%d", &x, &y, &z);
        g[x][y] = min(g[x][y], z);
        g[y][x] = min(g[y][x], z);
    }
    Dijkstra();
    cout << dis[te] << endl;
    return 0;
}