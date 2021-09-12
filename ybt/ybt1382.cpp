#include <bits/stdc++.h>
using namespace std;
long long dis[100010];
int h[100010], e[1000010], ne[1000010], w[1000010], idx;
bool vis[100010];
queue<int> q;
int n, m, a, b, c;
void add(int a, int b, int c)
{
    idx++;
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx;
}
void spfa()
{
    for (int i = 1; i <= n; i++)
        dis[i] = 1e16;
    dis[1] = 0;
    q.push(1);
    vis[1] = 1;
    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        vis[t] = 0;
        for (int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (dis[j] > dis[t] + w[i])
            {
                dis[j] = dis[t] + w[i];
                if (vis[j] == 0)
                {
                    q.push(j);
                    vis[j] = 1;
                }
            }
        }
    }
}
int main()
{
    scanf("%d%d", &n, &m);
    memset(h, -1, sizeof(h));
    while (m--)
    {
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c);
        add(b, a, c);
    }
    spfa();
    cout << dis[n] << endl;
    return 0;
}