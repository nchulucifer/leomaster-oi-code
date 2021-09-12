#include <bits/stdc++.h>
using namespace std;
int f[10010], enemy[10010], tot[10010];
int n, m, op, ans, p, q;
int find(int x)
{
    if (f[x] != x)
        f[x] = find(f[x]);
    return f[x];
}
void unionn(int x, int y)
{
    x = find(x);
    y = find(y);
    f[y] = x;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        f[i] = i;
    for (int i = 1; i <= m; i++)
    {
        cin >> op >> p >> q;
        if (op == 0)
            unionn(p, q);
        else
        {
            if (enemy[p] == 0)
                enemy[p] = find(q);
            else
                unionn(enemy[p], find(q));
            if (enemy[q] == 0)
                enemy[q] = find(p);
            else
                unionn(find(p), enemy[q]);
        }
    }
    for (int i = 1; i <= n; i++)
        tot[find(i)]++;
    for (int i = 1; i <= n; i++)
        if (tot[i])
            ans++;
    cout << ans << endl;
    return 0;
}