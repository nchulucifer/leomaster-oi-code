#include <bits/stdc++.h>
using namespace std;
int f[10010], c[100010], d[100010];
int dp[10010], vv[10010], ww[10010];
bool vis[10010];
int n, m, k, cnt;
int find(int x)
{
    if (f[x] == x)
        return x;
    return f[x] = find(f[x]);
}
void merge(int x, int y)
{
    f[y] = x;
    c[x] = c[x] + c[y];
    d[x] = d[x] + d[y];
}
int main()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        f[i] = i;
        cin >> c[i] >> d[i];
    }
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        x = find(x);
        y = find(y);
        if (x != y)
            merge(x, y);
    }
    cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int x = find(i);
        if (vis[x] == 0)
        {
            cnt++;
            vv[cnt] = c[x];
            ww[cnt] = d[x];
            vis[x] = 1;
        }
    }
    for (int i = 1; i <= cnt; i++)
        for (int j = k; j >= vv[i]; j--)
            dp[j] = max(dp[j], dp[j - vv[i]] + ww[i]);
    cout << dp[k] << endl;
    return 0;
}