#include <bits/stdc++.h>
using namespace std;
int a, b, c, x, y;
int main()
{
    cin >> x;
    c = x / 4;
    y = x % 4;
    switch (y)
    {
    case 0:
        a = 0;
        b = 0;
        break;
    case 1:
        a = 0;
        b = 1;
        c--;
        break;
    case 2:
        a = 1;
        b = 0;
        c--;
        break;
    case 3:
        a = 1;
        b = 1;
        c = c - 2;
        break;
    default:
        break;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}