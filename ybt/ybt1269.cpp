#include <bits/stdc++.h>
using namespace std;
int f[6005], w[505], c[505], s[505];
int n, m;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> c[i] >> s[i];
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= w[i]; j--)
            for (int k = 1; k <= s[i]; k++)
            {
                if (j >= k * w[i])
                    f[j] = max(f[j], f[j - w[i] * k] + c[i] * k);
                else
                    break;
            }
    cout << f[m] << endl;
    return 0;
}