#include <bits/stdc++.h>
using namespace std;
int m, money;
char c;
int main()
{
    money = 8;
    cin >> m >> c;
    if (m > 1000)
    {
        m -= 1000;
        money += m / 500 * 4;
        if (m % 500 != 0)
            money += 4;
    }
    if (c == 'y')
        money += 5;
    cout << money << endl;
    return 0;
}