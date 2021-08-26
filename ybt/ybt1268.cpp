#include <bits/stdc++.h>
using namespace std;
int f[205], w[35], c[35];
int n, m;
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> c[i];
    for (int i = 1; i <= n; i++)
        for (int j = w[i]; j <= m; j++)
        {
            f[j] = max(f[j], f[j - w[i]] + c[i]);
        }
    cout << "max=" << f[m] << endl;
    return 0;
}