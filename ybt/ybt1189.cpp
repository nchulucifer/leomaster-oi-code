#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[1000010];
int main()
{
    a[1] = 1;
    a[2] = 2;
    for (int i = 3; i <= 1e6; i++)
    {
        a[i] = (2 * a[i - 1] + a[i - 2]) % 32767;
    }
    cin >> n;
    while (n--)
    {
        cin >> k;
        cout << a[k] << endl;
    }
    return 0;
}