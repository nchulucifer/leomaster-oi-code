#include <bits/stdc++.h>
using namespace std;
double r, pi, d, c, s;
int main()
{
    pi = 3.14159;
    cin >> r;
    d = 2 * r;
    c = pi * d;
    s = pi * r * r;
    printf("%.4lf %.4lf %.4lf\n", d, c, s);
    return 0;
}