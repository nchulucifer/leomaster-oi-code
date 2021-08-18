#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x, y, z, s;
};
char a[101][101][101];
bool vis[101][101][101];
int gox[] = {-1, 1, 0, 0, 0, 0};
int goy[] = {0, 0, -1, 1, 0, 0};
int goz[] = {0, 0, 0, 0, -1, 1};
int l, r, c, ha, hb, hc, la, lb, lc;
int bfs(int x, int y, int z)
{
    queue<node> q;
    q.push({x, y, z, 0});
    while (!q.empty())
    {
        node t = q.front();
        q.pop();
        for (int i = 0; i < 6; i++)
        {
            int xx = t.x + gox[i];
            int yy = t.y + goy[i];
            int zz = t.z + goz[i];
            if (xx >= 1 && xx <= l && yy >= 1 && yy <= r && zz >= 1 && zz <= c && vis[xx][yy][zz] == 0)
            {
                vis[xx][yy][zz] = 1;
                q.push({xx, yy, zz, t.s + 1});
                if (xx == la && yy == lb && zz == lc)
                    return t.s + 1;
            }
        }
    }
    return -1;
}
int main()
{
    while (cin >> l >> r >> c)
    {
        if (l == 0 || r == 0 || c == 0)
            return 0;
        memset(vis, 0, sizeof(vis));
        for (int i = 1; i <= l; i++)
            for (int j = 1; j <= r; j++)
                for (int k = 1; k <= c; k++)
                {
                    cin >> a[i][j][k];
                    if (a[i][j][k] == 'S')
                    {
                        ha = i;
                        hb = j;
                        hc = k;
                    }
                    if (a[i][j][k] == 'E')
                    {
                        la = i;
                        lb = j;
                        lc = k;
                    }
                    if (a[i][j][k] == '#')
                    {
                        vis[i][j][k] = 1;
                    }
                }
        int t = bfs(ha, hb, hc);
        if (t != -1)
            printf("Escaped in %d minute(s).\n", t);
        else
            printf("Trapped!\n");
    }
    return 0;
}