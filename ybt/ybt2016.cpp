#include <bits/stdc++.h>
using namespace std;
int n, ans;
int main()
{
    cin >> n;
    ans = 0;
    for (int i = 1; i <= n; i++)
        ans = ans + i;
    cout << ans << endl;
    return 0;
}