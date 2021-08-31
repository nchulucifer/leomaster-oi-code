#include <bits/stdc++.h>
using namespace std;
int f[5010], n;
struct node
{
    int x, y;
} e[5010];
bool cmp(node a, node b)
{
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> e[i].x >> e[i].y;
    sort(e + 1, e + n + 1, cmp);
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        f[i] = 1;
        for (int j = 1; j < i; j++)
            if (e[i].y > e[j].y)
                f[i] = max(f[i], f[j] + 1);
        res = max(res, f[i]);
    }
    cout << res << endl;
    return 0;
}