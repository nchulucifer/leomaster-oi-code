#include <bits/stdc++.h>
using namespace std;

int f[105][105];
int n, m, t;
int main()
{
    for (int i = 1; i <= 10; i++) // 0 个苹果
        f[0][i] = 1;
    for (int i = 1; i <= 10; i++) // 1 个盘子
        f[i][1] = 1;
    for (int i = 1; i <= 10; i++)
        for (int j = 1; j <= 10; j++)
            // i 个苹果放入 j 个盘子
            if (i < j)
                f[i][j] = f[i][i];
            else
                f[i][j] = f[i][j - 1] + f[i - j][j];
    // i 个苹果放入 j-1 个盘子，最后一个盘子不放的答案加上每个盘子先放一个苹果，i-j 个苹果放入 j 个盘子的答案
    cin >> t;
    while (t--)
    {
        cin >> m >> n;
        cout << f[m][n] << endl;
    }
    return 0;
}