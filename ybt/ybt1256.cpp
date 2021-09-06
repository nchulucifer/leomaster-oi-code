#include <bits/stdc++.h>
using namespace std;
int gox[] = {-1, 1, 0, 0};
int goy[] = {0, 0, -1, 1};
int T, n, m, ans, x, y, s;
int ha, la, hb, lb;
char a[205][205];
bool b[205][205];
int bfs()
{
    queue<int> qx;
    queue<int> qy;
    queue<int> qs;
    qx.push(ha);
    qy.push(la);
    qs.push(0);
    b[ha][la] = 1;
    while (!qx.empty() && !qy.empty())
    {
        x = qx.front();
        y = qy.front();
        s = qs.front();
        qx.pop();
        qy.pop();
        qs.pop();
        for (int k = 0; k < 4; k++)
        {
            int xx = x + gox[k];
            int yy = y + goy[k];
            if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && b[xx][yy] == 0)
            {
                qx.push(xx);
                qy.push(yy);
                qs.push(s + 1);
                b[xx][yy] = 1;
                if (xx == hb && yy == lb)
                {
                    return s + 1;
                }
            }
        }
    }
    return -1;
}
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> n >> m;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'S')
                {
                    ha = i;
                    la = j;
                }
                if (a[i][j] == 'E')
                {
                    hb = i;
                    lb = j;
                }
                if (a[i][j] == '#')
                    b[i][j] = 1;
            }
        ans = bfs();
        if (ans != -1)
            cout << ans << endl;
        else
            cout << "oop!" << endl;
    }
    return 0;
}