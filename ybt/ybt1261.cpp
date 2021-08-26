#include <bits/stdc++.h>
using namespace std;
int mp[1010][1010];
int dp[1010];
int arr[1010];
int ans[1010];
int n, k, t;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mp[i][j];
    for (int i = 2; i <= n; i++)
        dp[i] = 1e9;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (mp[i][j] != 0)
            {
                if (dp[j] > dp[i] + mp[i][j])
                {
                    dp[j] = dp[i] + mp[i][j];
                    arr[j] = i;
                }
            }
    cout << "minlong=" << dp[n] << endl;
    k = n;
    while (k >= 1)
    {
        t++;
        ans[t] = k;
        k = arr[k];
    }
    for (int i = t; i >= 1; i--)
        cout << ans[i] << " ";
    return 0;
}