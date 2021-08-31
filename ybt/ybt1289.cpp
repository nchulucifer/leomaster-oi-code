#include <bits/stdc++.h>
using namespace std;
int a[1005], b[1005];
int ans1, n, k;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    b[n] = 1;
    for (int i = n - 1; i >= 1; i--)
    {
        b[i] = 1;
        for (int j = i + 1; j <= n; j++)
        {
            if (a[i] >= a[j])
            {
                b[i] = max(b[i], b[j] + 1);
            }
        }
    }
    ans1 = 0;
    for (int i = 1; i <= n; i++)
        if (b[i] > ans1)
            ans1 = b[i];
    cout << ans1 << endl;
    return 0;
}