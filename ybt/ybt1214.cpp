#include <bits/stdc++.h>
using namespace std;
int a[100], b[100], c[100];
int qs[100][10];
int t[10];
int n, ans, m, tmp;
void dfs(int k)
{
    if (k >= n)
    {
        ans++;
        for (int i = 0; i < 8; i++)
            qs[ans][i] = t[i];
    }
    for (int j = 0; j < n; j++)
        if (a[j] == 0 && b[k + j] == 0 && c[j - k + n - 1] == 0)
        {
            a[j] = 1;
            b[k + j] = 1;
            c[j - k + n - 1] = 1;
            t[k] = j + 1;
            dfs(k + 1);
            a[j] = 0;
            b[k + j] = 0;
            c[j - k + n - 1] = 0;
            t[k] = 0;
        }
}
int main()
{
    ans = 0;
    n = 8;
    dfs(0);
    cin >> m;
    while (m--)
    {
        cin >> tmp;
        for (int i = 0; i < 8; i++)
            cout << qs[tmp][i];
        cout << endl;
    }
    return 0;
}