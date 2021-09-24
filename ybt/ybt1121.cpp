#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int n, m, ans;
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    ans = 0;
    for (int i = 1; i <= n; i++)
        ans = ans + a[1][i] + a[m][i];
    for (int i = 2; i <= m - 1; i++)
        ans = ans + a[i][1] + a[i][n];
    cout << ans << endl;
    return 0;
}