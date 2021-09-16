#include <bits/stdc++.h>
using namespace std;
int f[10001000];
int n, m, u, v, tot;
int find(int x)
{
    if (f[x] == x)
        return x;
    return f[x] = find(f[x]);
}
void merge(int x, int y)
{
    f[y] = x;
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n * m; i++)
        f[i] = i;
    int x, y, xx, yy;
    while (scanf("%d%d%d%d", &x, &y, &xx, &yy) != EOF)
    {
        u = (x - 1) * m + y;
        v = (xx - 1) * m + yy;
        u = find(u);
        v = find(v);
        if (u != v)
            merge(u, v);
    }
    for (int i = 1; i <= m; i++)
        for (int j = 1; j < n; j++)
        {
            u = (j - 1) * m + i;
            v = j * m + i;
            u = find(u);
            v = find(v);
            if (u != v)
            {
                merge(u, v);
                tot = tot + 1;
            }
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j < m; j++)
        {
            u = (i - 1) * m + j;
            v = (i - 1) * m + j + 1;
            u = find(u);
            v = find(v);
            if (u != v)
            {
                merge(u, v);
                tot = tot + 2;
            }
        }
    cout << tot << endl;
    return 0;
}