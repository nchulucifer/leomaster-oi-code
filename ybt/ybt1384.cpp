#include <bits/stdc++.h>
using namespace std;
int a[105][105], b[105][105];
int num1[105], num2[105];
int n, m, x, y, ans;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        a[x][y] = 1;
        b[y][x] = 1;
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (a[i][k] && a[k][j])
                {
                    a[i][j] = 1;
                    b[j][i] = 1;
                }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (i != j)
            {
                if (a[i][j])
                    num1[i]++;
                if (b[i][j])
                    num2[i]++;
            }
    ans = 0;
    for (int i = 1; i <= n; i++)
        if (num1[i] >= (n + 1) / 2 || num2[i] >= (n + 1) / 2)
            ans++;
    cout << ans << endl;
    return 0;
}