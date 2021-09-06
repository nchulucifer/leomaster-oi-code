#include <bits/stdc++.h>
using namespace std;
int n;
double ans = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
            ans += 1.0 / i;
        else
            ans -= 1.0 / i;
    }
    printf("%.4lf\n", ans);
    return 0;
}