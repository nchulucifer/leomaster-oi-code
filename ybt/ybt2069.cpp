#include <bits/stdc++.h>
using namespace std;
int a, b, c, d, e;
int main()
{
    cin >> a >> b >> c >> d >> e;
    e = e + a / 3;
    b = b + a / 3;
    a = a / 3;
    a = a + b / 3;
    c = c + b / 3;
    b = b / 3;
    b = b + c / 3;
    d = d + c / 3;
    c = c / 3;
    c = c + d / 3;
    e = e + d / 3;
    d = d / 3;
    d = d + e / 3;
    a = a + e / 3;
    e = e / 3;
    printf("%5d%5d%5d%5d%5d\n", a, b, c, d, e);
    return 0;
}