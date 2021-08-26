#include <bits/stdc++.h>
using namespace std;
int f[205], w[35], c[35], s[35];
int n, m;
int main()
{
    cin >> m >> n;
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> c[i] >> s[i];
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == 0)
        {
            for (int j = w[i]; j <= m; j++)
                f[j] = max(f[j], f[j - w[i]] + c[i]);
        }
        else
        {
            for (int j = m; j >= 0; j--)
                for (int k = 1; k <= s[i]; k++)
                {
                    if (j >= w[i] * k)
                    {
                        f[j] = max(f[j], f[j - w[i] * k] + c[i] * k);
                    }
                    else
                        break;
                }
        }
    }
    cout << f[m] << endl;
    return 0;
}