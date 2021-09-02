#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[1000010];
int main()
{
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= 1e6; i++)
    {
        a[i] = (a[i - 1] + a[i - 2]) % 1000;
    }
    cin >> n;
    while (n--)
    {
        cin >> k;
        cout << a[k] << endl;
    }
    return 0;
}