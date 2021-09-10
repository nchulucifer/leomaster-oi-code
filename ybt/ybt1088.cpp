#include <bits/stdc++.h>
using namespace std;
int n, i;
int main()
{
    i = 0;
    cin >> n;
    while (n)
    {
        if (i == 0)
            cout << n % 10;
        else
            cout << " " << n % 10;
        i++;
        n = n / 10;
    }
    return 0;
}