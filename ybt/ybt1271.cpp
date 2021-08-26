#include <bits/stdc++.h>
using namespace std;
int f[25][80];
int n, m, k, v1, v2, w;
int main()
{
    cin >> n >> m >> k;
    memset(f, 0x3f, sizeof(f));
    f[0][0] = 0;
    while (k--)
    {
        cin >> v1 >> v2 >> w;
        for (int i = n; i >= 0; i--)
            for (int j = m; j >= 0; j--)
                f[i][j] = min(f[i][j], f[max(0, i - v1)][max(0, j - v2)] + w);
    }
    cout << f[n][m] << endl;
    return 0;
}