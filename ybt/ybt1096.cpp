#include <bits/stdc++.h>
using namespace std;
int n, m, t, ans = 0;
int main()
{

    cin >> n >> m;
    ans = 0;
    for (int i = n; i <= m; i++)
    {
        t = i;
        while (t != 0)
        {
            if (t % 10 == 2)
                ans++;
            t = t / 10;
        }
    }
    cout << ans << endl;
    return 0;
}