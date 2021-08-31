#include <bits/stdc++.h>
using namespace std;
int n, m;
int w[110][110];
int f[110][110];
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        memset(f, 0, sizeof(f));
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                cin >> w[i][j];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                f[i][j] = max(f[i - 1][j], f[i][j - 1]) + w[i][j];
        cout << f[n][m] << endl;
    }
    return 0;
}