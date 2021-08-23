#include <bits/stdc++.h>
using namespace std;
int n, x, t;
int main()
{
    cin >> n;
    t = 1;
    for (int i = 1; i <= n; i++)
    {
        t = 1;
        for (int j = 1; j <= i; j++)
            t = t * j;
        x = x + t;
    }
    cout << x << endl;
    return 0;
}