#include <bits/stdc++.h>
using namespace std;
int a[105][105], b[105][105];
int m, n;
double s;
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> b[i][j];
    s = 0;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == b[i][j])
                s = s + 1;
    s = s / (n * m) * 100;
    printf("%.2lf\n", s);
    return 0;
}