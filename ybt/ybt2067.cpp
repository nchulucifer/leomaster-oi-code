#include <bits/stdc++.h>
using namespace std;
double r;
double d, c, s;
int main()
{
    cin >> r;
    d = 2 * r;
    c = 3.14159 * d;
    s = 3.14159 * r * r;
    printf("%.4lf %.4lf %.4lf\n", d, c, s);
    return 0;
}