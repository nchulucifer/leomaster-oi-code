#include <bits/stdc++.h>
using namespace std;
int m, n, r, ms, p;
int x, y;
int tree[1010], son[1010];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        tree[y] = x;
        son[x]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (tree[i] == 0)
            r = i;
    }
    cout << r << endl;
    ms = 0;
    for (int i = 1; i <= n; i++)
    {
        if (son[i] > ms)
        {
            ms = son[i];
            p = i;
        }
    }
    cout << p << endl;
    for (int i = 1; i <= n; i++)
    {
        if (tree[i] == p)
            cout << i << " ";
    }
    return 0;
}