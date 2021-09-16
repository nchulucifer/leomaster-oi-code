#include <bits/stdc++.h>
using namespace std;
int a[1010][1010], num[1010];
int fa[1010], c[1010];
int n, xx, yy, maxn;
int find(int x)
{
    if (fa[x] != x)
        fa[x] = find(fa[x]);
    return fa[x];
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
        c[i] = 1;
        cin >> num[i];
        for (int j = 1; j <= num[i]; j++)
            cin >> a[i][j];
    }
    for (int i = n; i >= 1; i--)
        for (int j = 1; j <= num[i]; j++)
            if (a[i][j] > i)
            {
                xx = find(i);
                yy = find(a[i][j]);
                if (xx != yy)
                {
                    fa[yy] = xx;
                    c[xx] = c[xx] + c[yy];
                    if (c[xx] > (n / 2))
                    {
                        cout << i << endl;
                        return 0;
                    }
                }
            }

    return 0;
}