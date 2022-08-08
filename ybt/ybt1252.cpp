#include <bits/stdc++.h>
using namespace std;
int gox[] = {-1, 1, 0, 0};
int goy[] = {0, 0, -1, 1};
char a[105][105];
bool b[105][105];
queue<int> qx;
queue<int> qy;
queue<int> qs;
int main()
{
    int n, m, x, y, s;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    qx.push(1);
    qy.push(1);
    qs.push(1);
    b[1][1] = 1;
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
            if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && a[xx][yy] != '#' && b[xx][yy] == 0)
            {
                qx.push(xx);
                qy.push(yy);
                qs.push(s + 1);
                if (xx == n && yy == m)
                {
                    cout << s + 1 << endl;
                    return 0;
                }
                b[xx][yy] = 1;
            }
        }
    }
    return 0;
}