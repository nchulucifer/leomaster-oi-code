#include <bits/stdc++.h>
using namespace std;
double a[] = {28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
double ans;
int n, t;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        ans = ans + n * a[i];
    }
    printf("%.1lf\n", ans);
    return 0;
}