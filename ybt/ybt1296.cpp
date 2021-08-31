#include <bits/stdc++.h>
using namespace std;
int t, n, k, ans;
int a[1005], v[1005], f[1005];
int main()
{
    cin >> t;
    while (t--)
    {
        memset(f, 0, sizeof(f));
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        ans = -1e9;
        f[1] = v[1];
        for (int i = 2; i <= n; i++)
        {
            f[i] = v[i];
            for (int j = i - 1; j >= 1; j--)
                if (a[i] - a[j] > k)
                    f[i] = max(f[i], f[j] + v[i]);
        }
        for (int i = 1; i <= n; i++)
            ans = max(ans, f[i]);
        cout << ans << endl;
    }
    return 0;
}