#include <bits/stdc++.h>
using namespace std;
double r, r1, r2;
int main()
{
    cin >> r1 >> r2;
    r = 1 / (1 / r1 + 1 / r2);
    printf("%.2lf\n", r);
    return 0;
}