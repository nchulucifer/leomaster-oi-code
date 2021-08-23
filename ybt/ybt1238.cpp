#include <bits/stdc++.h>
using namespace std;
double l, r, mid;
double a, b, c, d;
double f(double x)
{
    return a * x * x * x + b * x * x + c * x + d;
}
int main()
{
    cin >> a >> b >> c >> d;
    for (double x = -100; x <= 100; x++)
    {
        l = x;
        r = x + 1;
        if (f(l) == 0)
            printf("%.2lf ", l);
        if (f(l) * f(r) < 0)
        {
            while (l + 1e-6 <= r)
            {
                mid = (l + r) / 2;
                if (f(l) * f(mid) < 0)
                    r = mid;
                else
                    l = mid;
            }
            printf("%.2lf ", l);
        }
    }
    return 0;
}