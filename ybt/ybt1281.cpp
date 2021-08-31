#include <bits/stdc++.h>
using namespace std;
int a[1010], b[1010];
int n, ans;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = n; i >= 1; i--)
    {
        b[i] = 1;
        for (int j = i + 1; j <= n; j++)
            if (a[i] < a[j] && b[i] < b[j] + 1)
                b[i] = b[j] + 1;
    }
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] > ans)
            ans = b[i];
    }
    cout << ans << endl;
    return 0;
}