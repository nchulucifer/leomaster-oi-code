#include <bits/stdc++.h>
using namespace std;
int a[1010], b[1010], c[1010];
int n, maxn, t;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = 1;
        c[i] = 0;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (a[j] >= a[i])
            {
                if (b[j] + 1 > b[i])
                {
                    b[i] = b[j] + 1;
                    c[i] = j;
                }
            }
        }
        if (b[i] >= maxn)
        {
            maxn = b[i];
            t = i;
        }
    }
    cout << "max=" << maxn << endl;
    while (c[t] != 0)
    {
        cout << a[t] << " ";
        t = c[t];
    }
    cout << a[t] << endl;
    return 0;
}