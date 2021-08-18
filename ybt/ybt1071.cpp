#include <bits/stdc++.h>
using namespace std;
int a, b, t, n;
int main()
{
    a = 0;
    b = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        t = a + b;
        a = b;
        b = t;
    }
    cout << a << endl;
    return 0;
}