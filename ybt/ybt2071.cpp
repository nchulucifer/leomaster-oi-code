#include <bits/stdc++.h>
using namespace std;
int x, y;
double ans;
int main()
{
    cin >> x >> y;
    ans = 1.0 * (x * 87 + y * 85) / (x + y);
    printf("%.4lf\n", ans);
    return 0;
}