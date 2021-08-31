#include <bits/stdc++.h>
using namespace std;
int n, m, t;
int f[1010][510];
int v[110], w[110];
int main()
{
    cin >> n >> m >> t;
    for (int i = 1; i <= t; i++)
        cin >> v[i] >> w[i];
    for (int i = 1; i <= t; i++)
    {
        for (int j = n; j >= v[i]; j--)
            for (int k = m - 1; k >= w[i]; k--)
                f[j][k] = max(f[j][k], f[j - v[i]][k - w[i]] + 1);
    }
    cout << f[n][m - 1] << " ";
    int h = m - 1;
    while (h > 0 && f[n][h - 1] == f[n][m - 1])
        h--;
    cout << m - h << endl;
    return 0;
}