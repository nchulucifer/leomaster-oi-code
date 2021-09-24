#include <bits/stdc++.h>
using namespace std;
int n, t, ans;
int main()
{
    cin >> n;
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        t = i;
        while (t != 0)
        {
            if (t % 10 == 1)
                ans++;
            t = t / 10;
        }
    }
    cout << ans << endl;
    return 0;
}