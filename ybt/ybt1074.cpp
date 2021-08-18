#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, mum, tot;
    tot = mum = 0;
    for (int i = 1; i <= 12; i++)
    {
        tot = tot + 300;
        cin >> a;
        tot = tot - a;
        if (tot < 0)
        {
            cout << '-' << i;
            return 0;
        }
        mum = mum + tot / 100 * 100;
        tot = tot % 100;
    }
    tot = tot + (mum * 120 / 100);
    cout << tot;
    return 0;
}