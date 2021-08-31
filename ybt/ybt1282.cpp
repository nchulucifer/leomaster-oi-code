#include <bits/stdc++.h>
using namespace std;
int n, ans, tmp;
int f[1010][1010], a[1010][1010];
int main()
{
    ans = -1e9;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            f[i][j] = f[i][j - 1] + a[i][j];
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            tmp = 0;
            for (int k = 1; k <= n; k++)
            {
                tmp += f[k][j] - f[k][i - 1];
                ans = max(tmp, ans);
                if (tmp < 0)
                    tmp = 0;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}