#include <bits/stdc++.h>
using namespace std;
int n, p, c, m;
int h[100010], e[2000010], ne[2000010], idx;
int dist[100010];
bool v[100010];
queue<int> q;
void add(int a, int b)
{
    idx++;
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
}
int bfs()
{
    q.push(c);
    dist[c] = 1;
    v[c] = 1;
    while (q.size())
    {
        int t = q.front();
        q.pop();
        for (int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (v[j] == 0)
            {
                dist[j] = dist[t] + 1;
                q.push(j);
                v[j] = 1;
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= n; i++)
        res = max(res, dist[i]);
    return res + m;
}
int main()
{
    memset(h, -1, sizeof(h));
    scanf("%d%d%d", &n, &p, &c);
    scanf("%d", &m);
    while (p--)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        add(a, b);
        add(b, a);
    }
    printf("%d\n", bfs());
    return 0;
}
