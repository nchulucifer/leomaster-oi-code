#include <bits/stdc++.h>
using namespace std;
int a[10010], b[10010], g[10010], k[10010];
int n, x, y;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    cin >> x >> y;
    for (int i = n; i >= 1; i--)
    {
        if (x >= a[i] && x <= a[i] + g[i] && y >= b[i] && y <= b[i] + k[i])
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}