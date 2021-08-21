#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, int> PII;
priority_queue<PII, vector<PII>, greater<PII> > heap;
ll dis[200010], w[800010];
int h[200010], e[800010], ne[800010], idx;
bool vis[200010];
int n, m, a, b;
ll c;
void add(int a, int b, ll c)
{
    idx++;
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx;
}
void dijkstra()
{
    dis[1] = 0;
    heap.push(make_pair(0, 1));
    while (!heap.empty())
    {
        PII t = heap.top();
        heap.pop();
        int v = t.second;
        if (vis[v])
            continue;
        vis[v] = 1;
        for (int i = h[v]; i != -1; i = ne[i])
        {
            int j = e[i];
            if (dis[j] > dis[v] + w[i])
            {
                dis[j] = dis[v] + w[i];
                heap.push(make_pair(dis[j], j));
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
    memset(dis, 0x3f, sizeof(dis));
    dijkstra();
    if (dis[n] == dis[0]) //dis[0]是无穷大
        cout << -1 << endl;
    else
        cout << dis[n] << endl;
    return 0;
}