#include <bits/stdc++.h>
using namespace std;
char mp[105][105];
bool vis[105][105];
int T, n, m, ha, la, ans = 0;
int gox[] = {-1, 1, 0, 0};
int goy[] = {0, 0, -1, 1};
void dfs(int x, int y)
{
    for (int i = 0; i < 4; i++)
    {
        int xx = x + gox[i];
        int yy = y + goy[i];
        if (xx >= 0 && xx < n && yy >= 0 && yy < m && vis[xx][yy] == 0)
        {
            vis[xx][yy] = 1;
            ans++;
            dfs(xx, yy);
        }
    }
}
int main()
{
    while (cin >> m >> n)
    {
        if (m == 0 && n == 0)
            return 0;
        memset(mp, 0, sizeof(mp));
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> mp[i][j];
                if (mp[i][j] == '#')
                    vis[i][j] = 1;
                if (mp[i][j] == '@')
                {
                    ha = i;
                    la = j;
                }
            }
        vis[ha][la] = 1;
        ans = 1;
        dfs(ha, la);
        cout << ans << endl;
    }
    return 0;
}