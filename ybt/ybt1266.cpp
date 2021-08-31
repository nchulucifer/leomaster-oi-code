#include <bits/stdc++.h>
using namespace std;
int f[25], w[25][25], dp[25][25];
int n, m;
void print(int x, int y)
{
    if(x == 0)  return;
    print(x - 1, y - dp[x][y]);
    cout<<x<<" "<<dp[x][y]<<endl;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> w[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = m; j >= 0; j--)
            for (int k = 0; k <= j; k++)
            {
                if (f[j - k] + w[i][k] >= f[j])
                {
                    f[j] = f[j - k] + w[i][k];
                    dp[i][j] = k;
                }
            }
    cout<<f[m]<<endl;
    print(n,m);
    return 0;
}