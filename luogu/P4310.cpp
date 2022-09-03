#include <bits/stdc++.h>
using namespace std;
int f[100010], last[35];
int ans,n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < 31; j++)
            if (x >> j & 1)
            {
                f[i] = max(f[i], f[last[j]]);
                last[j] = i;
            }
        f[i] = f[i] + 1;
    }
    ans = 0;
    for (int i = 1; i <= n; i++)
        ans = max(ans, f[i]);
    cout << ans << endl;
    return 0;
}
// 满足bi & bi-1 != 0 的条件其实是二进制下某一位同为 1，那我们就通过第 j 位是 1 的数字进行dp就可以了。