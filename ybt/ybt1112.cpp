#include <bits/stdc++.h>
using namespace std;
int a[10005];
int n, ma, mi;
int main()
{
    cin >> n;
    cin >> a[1];
    ma = mi = a[1];
    for (int i = 2; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > ma)
            ma = a[i];
        if (a[i] < mi)
            mi = a[i];
    }
    cout << ma - mi << endl;
    return 0;
}