#include <bits/stdc++.h>
using namespace std;
int a[1010], f[1010];
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i] = a[i];
    }
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j <= n; j++)
            if (a[j] > a[i])
                f[j] = max(f[j], f[i] + a[j]);
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, f[i]);
    cout << ans << endl;
    return 0;
}