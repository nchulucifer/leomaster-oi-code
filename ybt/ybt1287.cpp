#include <bits/stdc++.h>
using namespace std;
int n;
int w[105][105];
int f[105][105];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> w[i][j];
            f[i][j] = 1e9;
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 && j == 1)
                f[i][j] = w[i][j];
            else
            {
                if (i > 1)
                    f[i][j] = min(f[i][j], f[i - 1][j] + w[i][j]);
                if (j > 1)
                    f[i][j] = min(f[i][j], f[i][j - 1] + w[i][j]);
            }
        }
    cout << f[n][n] << endl;
    return 0;
}