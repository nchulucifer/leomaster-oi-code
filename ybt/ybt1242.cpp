#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[10010];
int l, r, mid;
bool check(int x)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt += a[i] / x;
    }
    return cnt >= k;
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        double b;
        cin >> b;
        a[i] = (int)(b * 100 + 0.5);
    }
    l = 0;
    r = 1e7;
    while (l < r)
    {
        mid = (l + r + 1) / 2;
        if (check(mid))
            l = mid;
        else
            r = mid - 1;
    }
    printf("%.2lf", l * 0.01);
    return 0;
}