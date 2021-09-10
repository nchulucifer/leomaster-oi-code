#include <bits/stdc++.h>
using namespace std;
int a[105];
int n, t, ans = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> t;
    for (int i = 1; i <= n; i++)
        if (a[i] == t)
            ans++;
    cout << ans << endl;
    return 0;
}