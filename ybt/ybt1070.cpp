#include <bits/stdc++.h>
using namespace std;
double y, n;
int main()
{
    cin >> y >> n;
    for (int i = 1; i <= n; i++)
        y = y * (1.001);
    printf("%.4lf\n", y);
    return 0;
}