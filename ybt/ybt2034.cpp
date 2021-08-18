#include <bits/stdc++.h>
using namespace std;
int t, n;
int a[105];
int main()
{
    while (cin >> t)
    {
        n++;
        a[n] = t;
    }
    for (int i = n; i >= 1; i--)
        cout << a[i] << " ";
    return 0;
}