#include <bits/stdc++.h>
using namespace std;
int m, n;
int w[35], f[20010];
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
        cin >> w[i];
    for (int i = 1; i <= n; i++)
    {
        for (int j = m; j >= w[i]; j--)
            f[j] = max(f[j], f[j - w[i]] + w[i]);
    }
    cout << m - f[m] << endl;
    return 0;
}