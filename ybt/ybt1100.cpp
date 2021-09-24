#include <bits/stdc++.h>
using namespace std;
int n, coins, x, days;
int main()
{
    coins = 1;
    days = x = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        x += coins;
        days++;
        if (days == coins)
        {
            days = 0;
            coins++;
        }
    }
    cout << x << endl;
    return 0;
}