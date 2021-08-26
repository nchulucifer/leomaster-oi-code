#include <bits/stdc++.h>
using namespace std;
int f[6005], w[505], c[505], b[15], s[15][35];
int n, m, t, x;
int main()
{
    cin >> m >> n >> t;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> c[i] >> x;
        b[x]++;
        s[x][b[x]] = i;
    }
    for (int i = 1; i <= t; i++)
        for (int j = m; j >= 0; j--)
            for (int k = 1; k <= b[i]; k++)
            {
                if (j >= w[s[i][k]])
                    f[j] = max(f[j], f[j - w[s[i][k]]] + c[s[i][k]]);
            }
    cout << f[m] << endl;
    return 0;
}