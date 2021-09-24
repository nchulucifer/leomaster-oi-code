#include <bits/stdc++.h>
using namespace std;
int n, m, a, b, c, s;
int main()
{
    cin >> n;
    s = 0;
    for (int i = 1; i <= n; i++)
    {
        m = i;
        a = m % 10;
        m /= 10;
        b = m % 10;
        m /= 10;
        c = m % 10;
        if (i % 7 != 0 && a != 7 && b != 7 && c != 7)
            s = s + i * i;
    }
    cout << s << endl;
    return 0;
}