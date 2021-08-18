#include <bits/stdc++.h>
using namespace std;
int n, ans, x;
int main()
{
    cin >> n;
    ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        ans = max(ans, x);
    }
    cout << ans << endl;
    return 0;
}