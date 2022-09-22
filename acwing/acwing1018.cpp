// AcWing 1018. 最低通行费 by leomaster
#include <bits/stdc++.h>
using namespace std;
int n;
int w[110][110];
int f[110][110];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> w[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 && j == 1)
                f[i][j] = w[i][j];
            else
            {
                f[i][j] = 1e9;
                if (i > 1)
                    f[i][j] = min(f[i][j], f[i - 1][j] + w[i][j]);
                if (j > 1)
                    f[i][j] = min(f[i][j], f[i][j - 1] + w[i][j]);
            }
        }
    cout << f[n][n] << endl;
    return 0;
}
/*
必须在2N-1的时间内穿过，所以只能向下或向右
考虑一个简单的边界问题就可以了
*/