// P5594 【XR-4】模拟赛 by leomaster
#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
bool b[1005];
int n, m, k, x;
int main()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> x;
            a[i][x] = j;
        }
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= m; j++)
            b[j] = 0;
        int ans = 0;
        for (int j = 1; j <= n; j++)
            if (a[j][i] != 0 && !b[a[j][i]])
            {
                b[a[j][i]] = 1;
                ans++;
            }
        cout << ans << " ";
    }
    return 0;
}