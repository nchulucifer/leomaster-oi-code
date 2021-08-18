#include <bits/stdc++.h>
using namespace std;
int n, x, y, a;
int main()
{
    cin >> n;
    x = 0;
    y = 1000;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        x = max(x, a);
        y = min(y, a);
    }
    cout << x - y << endl;
    return 0;
}