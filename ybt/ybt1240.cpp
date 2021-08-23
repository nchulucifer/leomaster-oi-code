#include <bits/stdc++.h>
using namespace std;
int a[100010];
int n, m, l, r, mid, x;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    while (m--)
    {
        cin >> x;
        l = 1;
        r = n;
        while (l < r - 1)
        {
            mid = (l + r) / 2;
            if (a[mid] > x)
                r = mid;
            else
                l = mid;
        }
        if (abs(a[l] - x) <= abs(a[r] - x))
            cout << a[l] << endl;
        else
            cout << a[r] << endl;
    }
    return 0;
}