#include <bits/stdc++.h>
using namespace std;
double l, r, mid;
double fun(double x)
{
    return x * x * x * x * x - 15 * x * x * x * x + 85 * x * x * x - 225 * x * x + 274 * x - 121;
}
int main()
{
    l = 1.5;
    r = 2.4;
    while (fabs(l - r) > 1e-7)
    {
        mid = (l + r) / 2;
        if (fun(mid) > 0)
            l = mid;
        else
            r = mid;
    }
    printf("%.6lf", r);
    return 0;
}