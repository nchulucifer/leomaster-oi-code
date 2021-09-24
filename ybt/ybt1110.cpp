#include <bits/stdc++.h>
using namespace std;
int a[10005];
int n, m, ans, t;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> t;
    for (int i = 1; i < +n; i++)
        if (a[i] == t)
        {
            cout << i << endl;
            return 0;
        }
    cout << -1 << endl;
    return 0;
}