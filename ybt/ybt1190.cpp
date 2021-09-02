#include <bits/stdc++.h>
using namespace std;
long long a[75];
int n;
int main()
{
    a[1] = 1;
    a[2] = 2;
    a[3] = 4;
    for (int i = 4; i <= 70; i++)
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    while (cin >> n)
    {
        if (n == 0)
            break;
        cout << a[n] << endl;
    }
    return 0;
}