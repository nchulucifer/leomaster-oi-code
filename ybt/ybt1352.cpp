#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pay[10005];
int ind[10005];
int h[10010], e[20010], ne[20010], idx;
void add(int a, int b)
{
    idx++;
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
}
queue<int> q;
int n, m, x, y, t, k, tmp;
ll ans = 0;
int main()
{
    memset(h, -1, sizeof(h));
    tmp = 0;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        add(y, x);
        ind[x]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (ind[i] == 0)
        {
            pay[i] = 100;
            q.push(i);
        }
    }
    while (!q.empty())
    {
        t = q.front();
        tmp++;
        ans += pay[t];
        for (int i = h[t]; i != -1; i = ne[i])
        {
            k = e[i];
            ind[k]--;
            pay[k] = pay[t] + 1;
            if (ind[k] == 0)
                q.push(k);
        }
        q.pop();
    }
    if (tmp == n)
        cout << ans << endl;
    else
        cout << "Poor Xed" << endl;
}