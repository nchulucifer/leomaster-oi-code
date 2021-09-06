#include <bits/stdc++.h>
using namespace std;
int a, b, c, am, bm, cm;
int main()
{
    cin >> a >> b >> c;
    for (int i = 2;; i++)
    {
        am = a % i;
        bm = b % i;
        cm = c % i;
        if (am == bm && am == cm)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}