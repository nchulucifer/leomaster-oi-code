#include <bits/stdc++.h>
using namespace std;
int n, m, x, t;
int a[10010];
int main()
{
    cin >> n >> m;
    x = t = 0;
    while (x < n)
    {
        for (int i = 1; i <= n; i++)
            if (a[i] == 0)
            {
                t++;
                if (t == m)
                {
                    cout << i << " ";
                    a[i] = 1;
                    t = 0;
                    x++;
                }
            }
    }
    return 0;
}