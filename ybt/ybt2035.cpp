#include <bits/stdc++.h>
using namespace std;
int a[105], n, t;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    t = a[1];
    for (int i = 2; i <= n; i++)
        a[i - 1] = a[i];
    a[n] = t;
    for (int i = 1; i <= n - 1; i++)
        cout << a[i] << " ";
    cout << a[n] << endl;
    return 0;
}