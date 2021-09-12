#include <bits/stdc++.h>
using namespace std;
int n, p, m;
int id[1010];
int h[1010], e[3010], w[3010], ne[3010], idx;
int dis[1010];
bool vis[1010];
queue<int> q;
void add(int a, int b, int c)
{
    idx++;
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx;
}
int spfa(int st)
{
    memset(dis, 0x3f, sizeof(dis));
    dis[st] = 0;
    q.push(st);
    vis[st] = 1;
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
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        int j = id[i];
        if (dis[j] == 0x3f3f3f3f)
            return 0x3f3f3f3f;
        res += dis[j];
    }
    return res;
}
int main()
{
    cin >> n >> p >> m;
    for (int i = 1; i <= n; i++)
        cin >> id[i];
    memset(h, -1, sizeof(h));
    for (int i = 1; i <= m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        add(a, b, c);
        add(b, a, c);
    }
    int res = 0x3f3f3f3f;
    for (int i = 1; i <= p; i++)
        res = min(res, spfa(i));
    cout << res << endl;
    return 0;
}