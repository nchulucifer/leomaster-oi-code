#include <bits/stdc++.h>
using namespace std;
int a, b, c, x;
int main()
{
    cin >> x;
    a = x / 100;
    b = (x % 100) / 10;
    c = x % 10;
    swap(a, c);
    x = a * 100 + b * 10 + c;
    cout << x << endl;
    return 0;
}