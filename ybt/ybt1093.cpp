#include <bits/stdc++.h>
using namespace std;
int n;
double s, t, x;
int main()
{
    cin >> x >> n;
    s = t = 1;
    for (int i = 1; i <= n; i++)
    {
        t = t * x;
        s = s + t;
    }
    printf("%.2lf\n", s);
    return 0;
}