#include <bits/stdc++.h>
using namespace std;
int n, m, x;
int f[505][505];
int t[505], cnt;
string s;
int inf = 0x3f3f3f3f;
int main()
{
    scanf("%d %d\n", &m, &n);
    memset(f, 0x3f, sizeof(f));
    while (m--)
    {
        getline(cin, s);
        memset(t, 0, sizeof(t));
        cnt = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
                t[cnt] = t[cnt] * 10 + (s[i] - '0');
            else
                cnt++;
        }
        for (int i = 1; i < cnt; i++)
            for (int j = i + 1; j <= cnt; j++)
                f[t[i]][t[j]] = 1;
    }
    for (int i = 1; i <= n; i++)
        f[i][i] = 0;

    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                f[i][j] = min(f[i][j], f[i][k] + f[k][j]);

    if (f[1][n] < inf / 2)
        cout << f[1][n] - 1 << endl;
    else
        cout << "NO" << endl;
    return 0;
}