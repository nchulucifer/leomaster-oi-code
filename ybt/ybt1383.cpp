#include <bits/stdc++.h>
using namespace std;
int mp[205][205], f[205];
int n, s, t;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        while (cin >> t)
        {
            if (t == 0)
                break;
            mp[i][t] = 1;
        }
    }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (mp[i][k] && mp[k][j])
                    mp[i][j] = 1;
    for (int i = 1; i <= n; i++)
        f[i] = i;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (mp[i][j])
                f[j] = f[i];
    s = 0;
    for (int i = 1; i <= n; i++)
        if (f[i] == i)
            s++;
    cout << s << endl;
    return 0;
}