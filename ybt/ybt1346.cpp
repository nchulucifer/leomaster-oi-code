#include <bits/stdc++.h>
using namespace std;
int n, m, q;
int fa[20010];
inline int read()
{
    int x = 0;
    short w = 0;
    char ch = 0;
    while (!isdigit(ch))
    {
        w |= ch == '-';
        ch = getchar();
    }
    while (isdigit(ch))
    {
        x = (x << 3) + (x << 1) + (ch ^ 48);
        ch = getchar();
    }
    return w ? -x : x;
}
int find(int x)
{
    if (fa[x] != x)
        fa[x] = find(fa[x]);
    return fa[x];
}
void merge(int a, int b)
{
    fa[b] = a;
}
int main()
{
    n = read();
    m = read();
    for (int i = 1; i <= n; i++)
        fa[i] = i;
    for (int i = 1; i <= m; i++)
    {
        int a, b;
        a = read();
        b = read();
        a = find(a);
        b = find(b);
        if (a != b)
            merge(a, b);
    }
    q = read();
    for (int i = 1; i <= q; i++)
    {
        int a, b;
        a = read();
        b = read();
        a = find(a);
        b = find(b);
        if (a == b)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}