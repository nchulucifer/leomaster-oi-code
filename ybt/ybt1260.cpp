#include <bits/stdc++.h>
using namespace std;
int a[1005], b[1005], c[1005];
int ans1, ans2, n, k;
int main()
{
    while (cin >> k)
    {
        n++;
        a[n] = k;
    }
    b[n] = 1;
    c[n] = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        b[i] = 1;
        c[i] = 1;
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] >= a[j])
            {
                b[i] = max(b[i], b[j] + 1);
            }
            if (a[i] < a[j])
            {
                c[i] = max(c[i], c[j] + 1);
            }
        }
    }
    ans1 = 0;
    for (int i = 1; i <= n; i++)
        if (b[i] > ans1)
            ans1 = b[i];
    ans2 = 0;
    for (int i = 1; i <= n; i++)
        if (c[i] > ans2)
            ans2 = c[i];
    cout << ans1 << endl;
    cout << ans2 << endl;
    return 0;
}