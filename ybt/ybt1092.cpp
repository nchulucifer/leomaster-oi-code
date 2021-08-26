#include <bits/stdc++.h>
using namespace std;
int n;
double t, sum;
int main()
{
    t = 1;
    sum = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        t = t * i;
        sum += 1 / t;
    }
    printf("%.10lf", sum);
    return 0;
}