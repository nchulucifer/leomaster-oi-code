#include <bits/stdc++.h>
using namespace std;
int n, x;
long long sum;
double ave;
int main()
{
    cin >> n;
    ave = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        sum = sum + x;
    }
    ave = 1.0 * sum / n;
    printf("%lld %.5lf\n", sum, ave);
    return 0;
}