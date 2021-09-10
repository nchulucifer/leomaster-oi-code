#include <bits/stdc++.h>
using namespace std;
double a, b, h;
int z;
int main()
{
    z = 9;
    cin >> h;
    b = h;
    a = h;
    while (z--)
    {
        h = h / 2;
        a = a + h * 2;
    }
    b = h / 2;
    cout << a << endl;
    cout << b << endl;
    return 0;
}