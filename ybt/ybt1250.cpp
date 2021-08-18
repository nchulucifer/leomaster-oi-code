#include <bits/stdc++.h>
using namespace std;
int m, n;
int c[55][55];
bool vis[55][55];
int cnt = 0, ans, tot;
void bfs(int x, int y)
{
    queue<int> qx;
    queue<int> qy;
    tot++;
    qx.push(x);
    qy.push(y);
    vis[x][y] = 1;
    while (!qx.empty())
    {
        x = qx.front();
        qx.pop();
        y = qy.front();
        qy.pop();
        int t = c[x][y];
        if (!(t & 1) && vis[x][y - 1] == 0)
        {
            qx.push(x);
            qy.push(y - 1);
            tot++;
            vis[x][y - 1] = 1;
        }
        t = t >> 1;
        if (!(t & 1) && vis[x - 1][y] == 0)
        {
            qx.push(x - 1);
            qy.push(y);
            tot++;
            vis[x - 1][y] = 1;
        }
        t = t >> 1;
        if (!(t & 1) && vis[x][y + 1] == 0)
        {
            qx.push(x);
            qy.push(y + 1);
            tot++;
            vis[x][y + 1] = 1;
        }
        t = t >> 1;
        if (!(t & 1) && vis[x + 1][y] == 0)
        {
            qx.push(x + 1);
            qy.push(y);
            tot++;
            vis[x + 1][y] = 1;
        }
    }
    return;
}
int main()
{
    memset(c, -1, sizeof(c));
    cin >> m;
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> c[i][j];
        }
    }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (vis[i][j] == 0)
            {
                tot = 0;
                cnt++;
                bfs(i, j);
                ans = max(ans, tot);
            }
        }
    }
    cout << cnt << endl;
    cout << ans << endl;
    return 0;
}