#include <bits/stdc++.h>
using namespace std;
struct node
{
    int x, y, s;
};
queue<node> q;
int ha, la, hb, lb, ansa, ansb;
bool vis[105][105];
int gox[] = {1, 1, -1, -1, 2, 2, -2, -2, 2, 2, -2, -2};
int goy[] = {2, -2, 2, -2, 1, -1, 1, -1, 2, -2, 2, -2};
int main()
{
    cin >> ha >> la;
    cin >> hb >> lb;
    q.push({1, 1, 0});
    while (!q.empty())
    {
        node t = q.front();
        q.pop();
        if (t.x == ha && t.y == la && ansa == 0)
            ansa = t.s;
        if (t.x == hb && t.y == lb && ansb == 0)
            ansb = t.s;
        if (ansa != 0 && ansb != 0)
            break;
        for (int i = 0; i < 12; i++)
        {
            int xx = t.x + gox[i];
            int yy = t.y + goy[i];
            if (xx >= 1 && xx <= 100 && yy >= 1 && yy <= 100 && vis[xx][yy] == 0)
            {
                vis[xx][yy] = 1;
                q.push({xx, yy, t.s + 1});
            }
        }
    }
    cout << ansa << endl;
    cout << ansb << endl;
    return 0;
}