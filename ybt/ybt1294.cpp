#include <bits/stdc++.h>
using namespace std;
int f[13000], w[3505], c[3505];
int n, m;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> c[i];
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= w[i]; j--)
        {
            f[j] = max(f[j], f[j - w[i]] + c[i]);
        }
    cout << f[m] << endl;
    return 0;
}