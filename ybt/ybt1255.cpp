#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII;
bool vis[1010][1010];
PII from[1010][1010];
int gox[] = {0, -1, 0, 1};
int goy[] = {-1, 0, 1, 0};
queue<PII> q;
int n;
void bfs()
{
    q.push({n - 1, n - 1});
    vis[n - 1][n - 1] = 1;
    while (!q.empty())
    {
        auto t = q.front();
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x = t.first + gox[i];
            int y = t.second + goy[i];
            if (x >= 0 && x < n && y >= 0 && y < n && vis[x][y] == 0)
            {
                q.push({x, y});
                vis[x][y] = 1;
                from[x][y] = t;
            }
        }
    }
}
int main()
{
    n=5;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> vis[i][j];
    bfs();
    PII end = {0, 0};
    while (1)
    {
        printf("(%d, %d)\n", end.first, end.second);
        if (end.first == n - 1 && end.second == n - 1)
            break;
        end = from[end.first][end.second];
    }
    return 0;
}