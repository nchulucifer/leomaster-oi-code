#include <bits/stdc++.h>
using namespace std;
int a[10005];
int n, ans, maxn;
int main()
{
    cin >> n;
    maxn = -1e7;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > maxn)
            maxn = a[i];
    }
    ans = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] != maxn)
            ans += a[i];
    cout << ans << endl;
    return 0;
}