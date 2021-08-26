#include <bits/stdc++.h>
using namespace std;
int fa[40010];
int n, m;
int find(int x)
{
    if (fa[x] != x)
        fa[x] = find(fa[x]);
    return fa[x];
}
void merge(int x, int y)
{
    fa[y] = x;
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n * n; i++)
        fa[i] = i;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        char c;
        cin >> x >> y >> c;
        if (c == 'D')
        {
            int t1 = x * (n - 1) + y;
            int t2 = (x + 1) * (n - 1) + y;
            t1 = find(t1);
            t2 = find(t2);
            if (t1 == t2)
            {
                cout << i << endl;
                return 0;
            }
            else
                merge(t1, t2);
        }
        if (c == 'R')
        {
            int t1 = x * (n - 1) + y;
            int t2 = x * (n - 1) + y + 1;
            t1 = find(t1);
            t2 = find(t2);
            if (t1 == t2)
            {
                cout << i << endl;
                return 0;
            }
            else
                merge(t1, t2);
        }
    }
    cout << "draw" << endl;
    return 0;
}