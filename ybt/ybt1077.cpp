#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, n, t, ans;
int main()
{
    ans = 0;
    cin >> n;
    while (n--)
    {
        cin >> t;
        a = t / 1000;
        b = t / 100 % 10;
        c = t / 10 % 10;
        d = t % 10;
        if (d - a - b - c > 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}