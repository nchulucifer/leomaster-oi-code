#include <bits/stdc++.h>
using namespace std;
int gox[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int goy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
queue<int> qx;
queue<int> qy;
int n, m, ans, x, y;
char a[115][115];
bool b[115][115];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '.')
                b[i][j] = 1;
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (a[i][j] == 'W' && b[i][j] == 0)
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
                    for (int k = 0; k < 8; k++)
                    {
                        int xx = x + gox[k];
                        int yy = y + goy[k];
                        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && b[xx][yy] == 0)
                        {
                            qx.push(xx);
                            qy.push(yy);
                            b[xx][yy] = 1;
                        }
                    }
                }
            }
        }
    cout << ans << endl;
    return 0;
}