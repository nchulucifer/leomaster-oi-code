#include <bits/stdc++.h>
using namespace std;
double a, b, c, p, s;
int main()
{
    cin >> a >> b >> c;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("%.3lf\n", s);
    return 0;
}