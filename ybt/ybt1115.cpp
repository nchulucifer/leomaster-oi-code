#include <bits/stdc++.h>
using namespace std;
int a[10005], b[10005];
int n, t;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > t)
            t = a[i];
        b[a[i]]++;
    }
    for (int i = 0; i <= t; i++)
        cout << b[i] << endl;
    return 0;
}