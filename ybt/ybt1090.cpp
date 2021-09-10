#include <bits/stdc++.h>
using namespace std;
int m, k, t, s;
int main()
{
    s = 0;
    cin >> m >> k;
    t = m;
    while (t > 0)
    {
        if (t % 10 == 3)
            s++;
        t = t / 10;
    }
    if (m % 19 == 0 && s == k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}