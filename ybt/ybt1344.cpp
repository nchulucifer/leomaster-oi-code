#include <bits/stdc++.h>
using namespace std;
int n, m, s, t;
double g[2010][2010];
double dist[2010];
bool vis[2010];
void dijkstra()
{
    dist[s] = 1;
    for (int i = 1; i <= n; i++)
    {
        int k = -1;
        for (int j = 1; j <= n; j++)
            if (!vis[j] && (k == -1 || dist[k] < dist[j]))
                k = j;
        vis[k] = 1;
        for (int j = 1; j <= n; j++)
            dist[j] = max(dist[j], dist[k] * g[k][j]);
    }
}
int main()
{
    scanf("%d%d", &n, &m);
    while (m--)
    {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        double z = (100.0 - c) / 100;
        g[a][b] = g[b][a] = max(g[a][b], z);
    }
    scanf("%d%d", &s, &t);
    dijkstra();
    printf("%.8lf\n", 100 / dist[t]);
    return 0;
}