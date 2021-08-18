#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    b = b * 100 / a;
    printf("%.3lf%%", b);
    return 0;
}