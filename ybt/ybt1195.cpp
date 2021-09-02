#include <bits/stdc++.h>
using namespace std;
int f[10010][105];
int a[10010];
int n, k, t;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    f[0][0] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            if (f[i - 1][j] == 1)
            {
                t = (j + a[i] % k) % k;
                f[i][t] = 1;
                t = (j - a[i] % k + k) % k;
                f[i][t] = 1;
            }
        }
    }
    if (f[n][0] == 1)
        puts("YES");
    else
        puts("NO");
    return 0;
}