#include <bits/stdc++.h>
using namespace std;
struct node
{
    int a, b, c;
} e[20005];
int f[305];
int n, m, sum;
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
    for (int i = 1; i <= m; i++)
        scanf("%d%d%d", &e[i].a, &e[i].b, &e[i].c);
    sort(e + 1, e + m + 1, cmp);
    int res = 0, cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        int a = e[i].a, b = e[i].b, w = e[i].c;
        a = find(a);
        b = find(b);
        if (a != b)
        {
            res = w;
            cnt++;
            f[a] = b;
        }
        if (cnt == n - 1)
            break;
    }
    cout << n - 1 << " " << res << endl;
    return 0;
}