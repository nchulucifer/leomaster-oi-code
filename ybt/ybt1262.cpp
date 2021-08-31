#include <bits/stdc++.h>
using namespace std;
int n, x, y, ans, k;
int g[205][205];
int f[205], w[205], pre[205];
void print(int k)
{
    if (k == 0)
        return;
    print(pre[k]);
    if (pre[k] == 0)
        cout << k;
    else
        cout << "-" << k;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i];
        f[i] = w[i];
    }
    while (cin >> x >> y)
    {
        if (x == 0 && y == 0)
            break;
        g[x][y] = 1;
    }
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (g[i][j] == 1 && f[j] < f[i] + w[j])
            {
                f[j] = f[i] + w[j];
                pre[j] = i;
            }
        }
        if (f[i] > ans)
        {
            ans = f[i];
            k = i;
        }
    }
    print(k);
    cout << endl;
    cout << ans << endl;
    return 0;
}
