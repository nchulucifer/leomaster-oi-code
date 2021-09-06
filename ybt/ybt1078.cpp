#include <bits/stdc++.h>
using namespace std;
int n, p, q, t;
double x = 0;
int main()
{
    cin >> n;
    p = 1;
    q = 2;
    for (int i = 1; i <= n; i++)
    {
        x += 1.0 * q / p;
        t = q;
        q += p;
        p = t;
    }
    printf("%.4lf\n", x);
    return 0;
}