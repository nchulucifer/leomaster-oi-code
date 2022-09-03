#include <bits/stdc++.h>
using namespace std;
int gox[] = {-1, 1, 0, 0};
int goy[] = {0, 0, -1, 1};
char a[105][105];
bool b[105][105];
queue<int> qx;
queue<int> qy;
int main()
{
    int n, m, x, y, ans = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] > '0' && b[i][j] == 0)
            {
                ans++;
                qx.push(i);
                qy.push(j);
                b[i][j] = 1;
                while (!qx.empty() && !qy.empty())
                {
                    x = qx.front();
                    y = qy.front();
                    qx.pop();
                    qy.pop();
                    for (int k = 0; k < 4; k++)
                    {
                        int xx = x + gox[k];
                        int yy = y + goy[k];
                        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && a[xx][yy] > '0' && b[xx][yy] == 0)
                        {
                            qx.push(xx);
                            qy.push(yy);
                            b[xx][yy] = 1;
                        }
                    }
                }
            }
    cout << ans << endl;
    return 0;
}