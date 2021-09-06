#include <bits/stdc++.h>
using namespace std;
int T, n;
int ha, la, hb, lb, ans;
struct node
{
    int x, y, s;
};
queue<node> q;
bool vis[305][305];
int gox[] = {1, 1, -1, -1, 2, 2, -2, -2};
int goy[] = {2, -2, 2, -2, 1, -1, 1, -1};
int bfs()
{
    q.push({ha, la, 0});
    while (!q.empty())
    {
        node t = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int xx = t.x + gox[i];
            int yy = t.y + goy[i];
            if (xx >= 0 && xx <= n - 1 && yy >= 0 && yy <= n - 1 && vis[xx][yy] == 0)
            {
                vis[xx][yy] = 1;
                if (xx == hb && yy == lb)
                    return t.s + 1;
                q.push({xx, yy, t.s + 1});
            }
        }
    }
}
int main()
{
    cin >> T;
    while (T--)
    {
        memset(vis, 0, sizeof(vis));
        while (!q.empty())
            q.pop();
        cin >> n;
        cin >> ha >> la;
        cin >> hb >> lb;
        if (ha == hb && la == lb)
            cout << 0 << endl;
        else
            cout << bfs() << endl;
    }
    return 0;
}