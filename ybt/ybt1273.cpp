#include <bits/stdc++.h>
using namespace std;
long long f[10005], a[30], n, m;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = a[i]; j <= m; j++)
            f[j] = f[j] + f[j - a[i]];

    cout << f[m] << endl;
    return 0;
}