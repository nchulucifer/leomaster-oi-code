#include <bits/stdc++.h>
using namespace std;
bool s[1048576 + 5];
int d, k, n, t;
int main()
{
    cin >> d >> k;
    n = (1 << d) - 1;
    for (int i = 1; i <= k; i++)
    {
        t = 1;
        while (t <= n)
        {
            s[t] = !s[t];
            if (s[t])
                t = 2 * t;
            else
                t = 2 * t + 1;
        }
    }
    cout << t / 2 << endl;
    return 0;
}