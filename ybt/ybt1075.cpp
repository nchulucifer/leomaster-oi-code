#include <bits/stdc++.h>
using namespace std;
int m, n, x, t;
int main()
{
    cin >> m >> n;
    x = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (m - t < 0)
            x++;
        else
            m = m - t;
    }
    cout << x;
}