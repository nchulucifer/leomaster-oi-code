#include <bits/stdc++.h>
using namespace std;
int i;
double x, n;
int main()
{
    n = 0;
    cin >> x;
    while (n <= x)
    {
        i++;
        n = n + 1.0 / i;
    }
    cout << i << endl;
    return 0;
}