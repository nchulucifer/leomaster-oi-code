#include <bits/stdc++.h>
using namespace std;
int n, x, y;
int main()
{
    cin >> n;
    x = y = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            x = x + i;
        }
        else
        {
            y = y + i;
        }
    }
    cout << x << " " << y << endl;
    return 0;
}