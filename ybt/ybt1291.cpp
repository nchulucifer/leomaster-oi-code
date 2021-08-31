#include <bits/stdc++.h>
using namespace std;
int n, m;
int f[10005], a;
int main()
{
    cin >> n >> m;
    f[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        for (int j = m; j >= a; j--)
            f[j] = f[j] + f[j - a];
    }
    cout << f[m] << endl;
    return 0;
}