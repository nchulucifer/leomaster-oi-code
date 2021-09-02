#include <bits/stdc++.h>
using namespace std;
int f[1005][2];
int n;
int main()
{
    cin >> n;
    f[1][0] = 9;
    f[1][1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (i != n)
        {
            f[i][0] = (f[i - 1][0] * 9 + f[i - 1][1]) % 12345;
            f[i][1] = (f[i - 1][0] + f[i - 1][1] * 9) % 12345;
        }
        else
        {
            f[i][0] = (f[i - 1][0] * 8 + f[i - 1][1]) % 12345;
            f[i][1] = (f[i - 1][0] + f[i - 1][1] * 8) % 12345;
        }
    }
    cout << f[n][0] << endl;
    return 0;
}