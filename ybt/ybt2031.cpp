#include <bits/stdc++.h>
using namespace std;
int s, a, b, c, d;
int main()
{
    for (int i = 32; i <= 99; i++)
    {
        s = i * i;
        a = s / 1000;
        b = s % 1000 / 100;
        c = s % 100 / 10;
        d = s % 10;
        if (a == b && c == d)
            cout << s << endl;
    }
    return 0;
}