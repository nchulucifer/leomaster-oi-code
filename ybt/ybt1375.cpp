#include <bits/stdc++.h>
using namespace std;
int n, m, a, b, s, cnt;
int mp[505][505];
int ans[1100], du[505];
void dfs(int v)
{
    for (int i = 1; i <= n; i++)
        if (mp[v][i])
        {
            mp[v][i]--;
            mp[i][v]--;
            dfs(i);
        }
    cnt++;
    ans[cnt] = v;
}
int main()
{
    n = 500;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        mp[a][b]++;
        mp[b][a]++;
        du[a]++;
        du[b]++;
    }
    s = 1;
    while (du[s] == 0)
        s++;
    for (int i = 1; i <= n; i++)
        if (du[i] % 2 == 1)
        {
            s = i;
            break;
        }
    dfs(s);
    for (int i = cnt; i >= 1; i--)
        cout << ans[i] << endl;
    return 0;
}