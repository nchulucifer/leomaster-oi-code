// AcWing 1027. 方格取数 by leomaster
#include <bits/stdc++.h>
using namespace std;
int a[12][12], n;
int f[12][12][12][12];
int main()
{
    cin >> n;
    for (;;)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 0 && y == 0 && z == 0)
            break;
        a[x][y] = z;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
                for (int l = 1; l <= n; l++)
                {
                    f[i][j][k][l] = max(max(f[i - 1][j][k - 1][l], f[i - 1][j][k][l - 1]), max(f[i][j - 1][k - 1][l], f[i][j - 1][k][l - 1])) + a[i][j] + a[k][l];
                    if (i == k && l == j)
                        f[i][j][k][l] = f[i][j][k][l] - a[i][j];
                }
    cout << f[n][n][n][n] << endl;
    return 0;
}
/*
看作是两个人同时走，如果两个人走到同一个格子，只计算一次
枚举两个人的坐标的情况，把对应的最大方案记录下来就可以
提示：可以想一下，怎么优化到三层循环
第一层枚举移动的步数，第二层和第三层考虑横向移动步数
*/