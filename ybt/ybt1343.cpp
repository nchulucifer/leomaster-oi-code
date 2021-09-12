#include <bits/stdc++.h>
using namespace std;
int x[160], y[160];
double f[160][160];
double md[160];
int n;
char c;
double jl(int i, int j)
{
    return sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> c;
            if (c == '1')
                f[i][j] = jl(i, j);
            else if (i != j)
                f[i][j] = 1e12;
            else
                f[i][j] = 0;
        }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if (f[i][j] > md[i] && f[i][j] != 1e12)
                md[i] = f[i][j];
    }
    double ans = 1e12;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (f[i][j] == 1e12)
            {
                double tmp = jl(i, j);
                if (tmp + md[i] + md[j] < ans)
                    ans = tmp + md[i] + md[j];
            }
    for (int i = 1; i <= n; i++)
        if (md[i] > ans)
            ans = md[i];
    printf("%.6lf\n", ans);
    return 0;
}