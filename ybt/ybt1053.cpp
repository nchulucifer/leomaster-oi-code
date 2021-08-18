#include <bits/stdc++.h>
using namespace std;
int a, b, c, x;
int main()
{
    cin >> a >> b >> c;
    if (a > b)
        x = a;
    else
        x = b;
    if (c > x)
        x = c;
    cout << x << endl;
    return 0;
}