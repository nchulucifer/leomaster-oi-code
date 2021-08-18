#include <bits/stdc++.h>
using namespace std;
int n;
double ave, x;
int main()
{
    cin >> n;
    ave = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        ave = ave + x;
    }
    ave = ave / n;
    printf("%.2lf\n", ave);
    return 0;
}