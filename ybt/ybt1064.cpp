#include <bits/stdc++.h>
using namespace std;
int a, b, c, j, y, t, ans, n;
int main()
{
    cin >> n;
    while (n--)
    {
        cin >> j >> y >> t;
        a += j;
        b += y;
        c += t;
        ans += j + y + t;
    }
    cout << a << " " << b << " " << c << " " << ans << endl;
    return 0;
}