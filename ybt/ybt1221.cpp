#include <bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    if (x % y == 0)
        return y;
    return gcd(y, x % y);
}
int n, a[15], b[15], ans, cnt; // b 数组表示第 i 个组内数字个数
int g[15][15];                 //每个组内的数字都是哪些数字
bool check(int u, int k)       //检查 a[u] 能否放入第 k 个组
{
    for (int i = 1; i <= b[k]; i++)
        if (gcd(g[k][i], a[u]) != 1)
            return false;
    return true;
}
void dfs(int u)
{
    if (u == n + 1)
    {
        ans = min(ans, cnt); //更新答案
        return;
    }
    for (int i = 1; i <= cnt; i++)
    {
        //考虑放入第 i 个组
        if (check(u, i))
        {
            b[i]++;
            g[i][b[i]] = a[u];
            dfs(u + 1);
            g[i][b[i]] = 0;
            b[i]--;
        }
    }
    //放入一个新的组
    cnt++; //创建一个新的组
    b[cnt]++;
    g[cnt][b[cnt]] = a[u];
    dfs(u + 1);
    g[cnt][b[cnt]] = 0;
    b[cnt]--;
    cnt--;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    ans = n;
    dfs(1);
    cout << ans << endl;
    return 0;
}