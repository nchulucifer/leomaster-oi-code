#include <bits/stdc++.h>
using namespace std;
int gox[] = {-1, 1, 0, 0};
int goy[] = {0, 0, -1, 1};
int n, ans, t;
int ha, la, hb, lb;
char a[105][105];
bool b[105][105];
bool flag = 0;
void dfs(int x, int y)
{
    if (x == hb && y == lb)
    {
        flag = 1;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        int xx = x + gox[i];
        int yy = y + goy[i];
        if (xx >= 0 && xx <= n - 1 && yy >= 0 && yy <= n - 1 && b[xx][yy] == 0)
        {
            b[xx][yy] = 1;
            dfs(xx, yy);
        }
    }
}
int main()
{
    cin >> t;
    while (t--)
    {
        flag = 0;
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        cin >> n;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '#')
                    b[i][j] = 1;
            }
        cin >> ha >> la >> hb >> lb;
        if (b[ha][la] == 0 && b[hb][lb] == 0)
            dfs(ha, la);
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}