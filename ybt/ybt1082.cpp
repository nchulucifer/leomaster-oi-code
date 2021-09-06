#include <bits/stdc++.h>
using namespace std;
int a, b, n, x;
int main()
{
    cin >> a >> b >> n;
    for (int i = 1; i <= n; i++)
    {
        a = a % b;
        a = a * 10;
        x = a / b;
    }
    cout << x << endl;
    return 0;
}