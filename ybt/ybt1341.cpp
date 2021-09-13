#include <bits/stdc++.h>
using namespace std;
int n, m, a, b, s, cnt;
int mp[505][505];
int ans[1010], du[505];
void dfs(int v)
{
    for (int i = 1; i <= n; i++)
        if (mp[v][i])
        {
            mp[v][i] = mp[i][v] = 0;
            dfs(i);
        }
    cnt++;
    ans[cnt] = v;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        mp[a][b] = mp[b][a] = 1;
        du[a]++;
        du[b]++;
    }
    s = 1;
    for (int i = 1; i <= n; i++)
        if (du[i] % 2 == 1)
        {
            s = i;
            break;
        }
    dfs(s);
    for (int i = 1; i <= cnt; i++)
        cout << ans[i] << " ";
    return 0;
}