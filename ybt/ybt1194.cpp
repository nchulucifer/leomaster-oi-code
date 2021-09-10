#include <bits/stdc++.h>
using namespace std;
long long f[25][25];
int n, m;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || j == 1)
                f[i][j] = 1;
            else
                f[i][j] = f[i - 1][j] + f[i][j - 1];
        }
    cout << f[n][m] << endl;
    return 0;
}