#include <bits/stdc++.h>
using namespace std;
int n, a, b, c, t;
int main()
{
    a = b = c = 0;
    cin >> n;
    while (n--)
    {
        cin >> t;
        if (t == 1)
            a++;
        if (t == 5)
            b++;
        if (t == 10)
            c++;
    }
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}