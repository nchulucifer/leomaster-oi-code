#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, n;
    cin >> n;
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    cout << c << b << a;
    return 0;
}
