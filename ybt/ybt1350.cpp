#include <bits/stdc++.h>
using namespace std;
int mp[105][105];
int vis[105], minn[105], t, u, n, ans;
int main()
{
    ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mp[i][j];
    for (int i = 1; i <= n; i++)
        minn[i] = 1e9;
    minn[1] = 0;
    for (int j = 1; j <= n; j++)
    {
        t = 1e9;
        for (int i = 1; i <= n; i++)
        {
            if (minn[i] < t && vis[i] == 0)
            {
                t = minn[i];
                u = i;
            }
        }
        vis[u] = 1;
        ans += minn[u];
        for (int i = 1; i <= n; i++)
            if (vis[i] == 0 && minn[i] > mp[u][i])
                minn[i] = mp[u][i];
    }
    cout << ans << endl;
    return 0;
}