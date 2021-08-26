#include <bits/stdc++.h>
using namespace std;
int fa[150005];
int n, k, ans, x, y, d, x_self, x_eat, x_enemy, y_self, y_eat, y_enemy;
int get(int x)
{
    if (x == fa[x])
        return x;
    return fa[x] = get(fa[x]);
}
void merge(int x, int y)
{
    x = get(x);
    y = get(y);
    fa[x] = y;
}
int main()
{
    cin >> n >> k;
    ans = 0;
    for (int i = 1; i <= 3 * n; i++)
        fa[i] = i;

    for (int i = 1; i <= k; i++)
    {
        cin >> d >> x >> y;
        if (x > n || y > n)
        {
            ans++;
            continue;
        }
        x_self = x;
        x_eat = x + n;
        x_enemy = x + n + n;
        y_self = y;
        y_eat = y + n;
        y_enemy = y + n + n;
        if (d == 1)
        {
            if (get(x_eat) == get(y_self) || get(x_self) == get(y_eat))
            {
                ans++;
                continue;
            }
            else
            {
                merge(x_self, y_self);
                merge(x_eat, y_eat);
                merge(x_enemy, y_enemy);
            }
        }
        if (d == 2)
        {
            if (get(x_self) == get(y_self) || get(x_self) == get(y_eat))
            {
                ans++;
                continue;
            }
            else
            {
                merge(x_eat, y_self);
                merge(x_self, y_enemy);
                merge(x_enemy, y_eat);
            }
        }
    }
    cout << ans << endl;
    return 0;
}