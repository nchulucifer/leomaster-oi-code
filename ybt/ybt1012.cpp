#include <bits/stdc++.h>
using namespace std;
double a, b, c, d, x;
double f;
int main()
{
    cin >> x >> a >> b >> c >> d;
    f = a * x * x * x + b * x * x + c * x + d;
    printf("%.7lf", f);
    return 0;
}