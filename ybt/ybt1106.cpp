#include <bits/stdc++.h>
using namespace std;
double a[5];
int n, t;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (t <= 18)
            a[1]++;
        if (t >= 19 && t <= 35)
            a[2]++;
        if (t >= 36 && t <= 60)
            a[3]++;
        if (t >= 61)
            a[4]++;
    }
    for (int i = 1; i <= 4; i++)
        printf("%.2lf%%\n", a[i] / n * 100);
    return 0;
}