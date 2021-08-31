#include <bits/stdc++.h>
using namespace std;
int n, T;
int h[110];
int f[110];
int main()
{
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> h[i];
        int res = 0;
        for (int i = 1; i <= n; i++)
        {
            f[i] = 1;
            for (int j = 1; j < i; j++)
                if (h[i] < h[j])
                    f[i] = max(f[i], f[j] + 1);
            res = max(res, f[i]);
        }
        memset(f, 0, sizeof(f));
        for (int i = n; i >= 1; i--)
        {
            f[i] = 1;
            for (int j = n; j > i; j--)
                if (h[i] < h[j])
                    f[i] = max(f[i], f[j] + 1);
            res = max(res, f[i]);
        }
        cout << res << endl;
    }
    return 0;
}