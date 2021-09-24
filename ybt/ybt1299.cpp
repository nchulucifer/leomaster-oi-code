#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[105], f[105][105];
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    memset(f, -0x3f, sizeof(f));
    f[0][0] = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= k - 1; j++)
            f[i][j] = max(f[i - 1][j], f[i - 1][((j - a[i]) % k + k) % k] + a[i]);
    cout << f[n][0] << endl;
    return 0;
}