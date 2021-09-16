#include <bits/stdc++.h>
using namespace std;
int n;
int h[105], e[5510], ne[5510], idx;
int d[105];
void add(int a, int b)
{
    idx++;
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx;
}
void topsort()
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (d[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int t = q.front();
        cout << t << " ";
        q.pop();
        for (int i = h[t]; i != -1; i = ne[i])
        {
            int j = e[i];
            d[j]--;
            if (d[j] == 0)
                q.push(j);
        }
    }
}

int main()
{
    cin >> n;
    memset(h, -1, sizeof(h));
    for (int i = 1; i <= n; i++)
    {
        int s;
        while (cin >> s)
        {
            if (s == 0)
                break;
            add(i, s);
            d[s]++;
        }
    }
    topsort();
    return 0;
}