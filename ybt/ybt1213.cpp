#include <bits/stdc++.h>
using namespace std;
int a[100], b[100], c[100];
int t[15][15];
int n, ans;
void dfs(int k)
{
    if (k >= n)
    {
        ans++;
        cout << "No. " << ans << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << t[i][j] << " ";
            cout << endl;
        }
    }
    for (int j = 0; j < n; j++)
        if (a[j] == 0 && b[k + j] == 0 && c[j - k + n - 1] == 0)
        {
            a[j] = 1;
            b[k + j] = 1;
            c[j - k + n - 1] = 1;
            t[j][k] = 1;
            dfs(k + 1);
            a[j] = 0;
            b[k + j] = 0;
            c[j - k + n - 1] = 0;
            t[j][k] = 0;
        }
}
int main()
{
    ans = 0;
    n = 8;
    dfs(0);
    return 0;
}