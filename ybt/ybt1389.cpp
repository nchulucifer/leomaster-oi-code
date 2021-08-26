#include <bits/stdc++.h>
using namespace std;
int n, m, q;
int fa[100010], cnt[100010];
int find(int x)
{
    if (fa[x] != x)
        fa[x] = find(fa[x]);
    return fa[x];
}
void merge(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        fa[b] = a;
        cnt[a] = cnt[a] + cnt[b];
    }
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
        cnt[i] = 1;
    }

    while (m--)
    {
        int a, b;
        char c;
        c = getchar();
        while (c != 'M' && c != 'Q')
            c = getchar();
        if (c == 'M')
        {
            scanf("%d%d", &a, &b);
            merge(a, b);
        }
        if (c == 'Q')
        {
            scanf("%d", &a);
            a = find(a);
            printf("%d\n", cnt[a]);
        }
    }
    return 0;
}