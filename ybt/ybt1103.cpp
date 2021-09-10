#include <bits/stdc++.h>
using namespace std;
int ans, h;
int a[105];
int main()
{
    ans = 0;
    for (int i = 1; i <= 10; i++)
        cin >> a[i];
    cin >> h;
    h = h + 30;
    for (int i = 1; i <= 10; i++)
        if (h >= a[i])
            ans++;
    cout << ans << endl;
    return 0;
}