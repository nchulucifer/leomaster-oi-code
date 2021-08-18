#include <bits/stdc++.h>
using namespace std;
double x;
int main()
{
    cin >> x;
    if (x <= 20)
        x = x * 1.68;
    else
        x = x * 1.98;
    printf("%.2lf\n", x);
    return 0;
}