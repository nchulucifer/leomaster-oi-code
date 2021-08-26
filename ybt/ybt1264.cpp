#include <bits/stdc++.h>
using namespace std;
int n, T;
int h[1010];
int f[1010], g[1010];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> h[i];
    for (int i = 1; i <= n; i++)
    {
        f[i] = 1;
        for (int j = 1; j < i; j++)
            if (h[i] > h[j])
                f[i] = max(f[i], f[j] + 1);
    }
    for (int i = n; i >= 1; i--)
    {
        g[i] = 1;
        for (int j = n; j > i; j--)
            if (h[i] > h[j])
                g[i] = max(g[i], g[j] + 1);
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
        res = max(res, f[i] + g[i] - 1);
    cout << n - res << endl;
    return 0;
}