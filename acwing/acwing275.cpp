// AcWing 275. 传纸条 by leomaster
#include <bits/stdc++.h>
using namespace std;
int n, m;
int g[55][55];
int f[110][55][55];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> g[i][j];
    for (int k = 2; k <= n + m; k++)
        for (int i = max(1, k - m); i <= n && i < k; i++)
            for (int j = max(1, k - m); j <= n && j < k; j++)
                if (i != j || k == 2 || k == n + m)
                {
                    int t = g[i][k - i] + g[j][k - j];
                    f[k][i][j] = max(f[k][i][j], f[k - 1][i][j] + t);
                    f[k][i][j] = max(f[k][i][j], f[k - 1][i - 1][j] + t);
                    f[k][i][j] = max(f[k][i][j], f[k - 1][i][j - 1] + t);
                    f[k][i][j] = max(f[k][i][j], f[k - 1][i - 1][j - 1] + t);
                }
    cout << f[n + m][n][n] << endl;
    return 0;
}
/*
本题就用了将四层循环变化为三层循环的技巧
k 表示的二维坐标的和，同时看作两个人从左上角移动 i 表示纵向移动方向，j 表示第二个人的纵向移动方向
*/