#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll S, c, f = 1e16;
ll dis[505][505];
int n, m, a, b;
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            dis[i][j] = f;
    for (int i = 1; i <= n; i++)
        dis[i][i] = 0;
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d%lld", &a, &b, &c);
        dis[a][b] = min(dis[a][b], c);
    }

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (dis[i][j] > 1e13)
                dis[i][j] = f;//谜之更新，不更新会挂一个点
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            S ^= dis[i][j] + f;
    printf("%lld\n", S);
    return 0;
}