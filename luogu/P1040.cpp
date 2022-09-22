// P1040 [NOIP2003 提高组] 加分二叉树 by leomaster
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[35];
ll f[35][35];     // l~r的权值和
int root[35][35]; // l~r构成的子树的根
int n;
ll dfs1(int l, int r)
{
    if (l > r) //不存在子树
        return 1;
    if (f[l][r] == 0) //类记忆化搜索
    {
        for (int i = l; i <= r; i++)
        {
            ll tmp = dfs1(l, i - 1) * dfs1(i + 1, r) + a[i];
            if (tmp > f[l][r])
            {
                root[l][r] = i;
                f[l][r] = tmp;
            }
        }
    }
    return f[l][r];
}
void dfs2(int l, int r)
{
    if (l > r)
        return;
    cout << root[l][r] << " ";
    dfs2(l, root[l][r] - 1);
    dfs2(root[l][r] + 1, r);
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        f[i][i] = a[i];
        root[i][i] = i;
    }
    cout << dfs1(1, n) << endl;
    dfs2(1, n);
    return 0;
}
//把一个树型dfs问题，转化成一个区间问题