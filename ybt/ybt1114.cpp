#include <bits/stdc++.h>
using namespace std;
double a[305], ave, t1, t2;
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    ave = 0;
    for (int i = 2; i <= n - 1; i++)
        ave = ave + a[i];
    ave = ave / (n - 2);
    t1 = abs(ave - a[2]);
    t2 = abs(ave - a[n - 1]);
    if (t1 < t2)
        t1 = t2;
    printf("%.2lf %.2lf\n", ave, t1);
    return 0;
}