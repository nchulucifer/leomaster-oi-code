#include <bits/stdc++.h>
using namespace std;
int gox[] = {2, 2, -2, -2, 1, 1, -1, -1};
int goy[] = {-1, 1, -1, 1, -2, 2, -2, 2};
int n, m, t, nm, ha, la, ans;
bool b[105][105];
void dfs(int x, int y, int s)
{
    if (s == nm)
    {
        ans++;
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        int xx = x + gox[i];
        int yy = y + goy[i];
        if (xx >= 0 && xx <= n - 1 && yy >= 0 && yy <= m - 1 && b[xx][yy] == 0)
        {
            b[xx][yy] = 1;
            dfs(xx, yy, s + 1);
            b[xx][yy] = 0;
        }
    }
}
int main()
{
    cin >> t;
    while (t--)
    {
        ans = 0;
        memset(b, 0, sizeof(b));
        cin >> n >> m >> ha >> la;
        nm = n * m;
        b[ha][la] = 1;
        dfs(ha, la, 1);
        cout << ans << endl;
    }
    return 0;
}