#include <bits/stdc++.h>
using namespace std;
int x, y, a, b;
double f;
int main()
{
    cin >> x >> a >> y >> b;
    f = 1.0 * (b * y - a * x) / (b - a);
    printf("%.2lf", f);
    return 0;
}