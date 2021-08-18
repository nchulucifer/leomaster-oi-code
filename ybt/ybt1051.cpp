#include <bits/stdc++.h>
using namespace std;
double x, y;
int n;
int main()
{
    cin >> x;
    n = x / 5;
    switch (n)
    {
    case 0:
        y = 2.5 - x;
        break;
    case 1:
        y = 2 - 1.5 * (x - 3) * (x - 3);
        break;
    default:
        y = x / 2 - 1.5;
    }
    printf("%.3lf", y);
    return 0;
}