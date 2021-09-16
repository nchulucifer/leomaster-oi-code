#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a, b, c;
} e[10005];
int f[2005];
int n, m, res;
bool cmp(node x, node y)
{
    return x.c < y.c;
}
int find(int x)
{
    if (f[x] != x)
        f[x] = find(f[x]);
    return f[x];
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
        f[i] = i;
    res = 0;
    for (int i = 1; i <= m; i++)
    {
        int a, b, c, t;
        scanf("%d%d%d%d", &t, &a, &b, &c);
        if (t == 1)
        {
            a = find(a);
            b = find(b);
            res += c;
            f[a] = b;
        }
        else
            e[i] = {a, b, c};
    }
    sort(e + 1, e + m + 1, cmp);
    for (int i = 1; i <= m; i++)
    {
        int a = e[i].a, b = e[i].b, w = e[i].c;
        a = find(a);
        b = find(b);
        if (a != b)
        {
            res += w;
            f[a] = b;
        }
    }
    cout << res << endl;
    return 0;
}