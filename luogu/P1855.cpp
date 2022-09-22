// P1855 榨取kkksc03 by leomaster
#include <bits/stdc++.h>
using namespace std;
int n, m, t, f[210][210];
int c[110], v[110];
int main()
{
    cin >> n >> m >> t;
    for (int i = 1; i <= n; i++)
        cin >> c[i] >> v[i];
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= c[i]; j--)
            for (int k = t; k >= v[i]; k--)
                f[j][k] = max(f[j][k], f[j - c[i]][k - v[i]] + 1);
    cout << f[m][t] << endl;
    return 0;
}
/*
没啥好讲的，二维费用裸背包dp
*/