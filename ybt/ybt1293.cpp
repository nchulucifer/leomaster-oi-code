#include <bits/stdc++.h>
using namespace std;
int f[1010];
int v[] = {0, 10, 20, 50, 100};
int n;
int main()
{
    cin >> n;
    f[0] = 1;
    for (int i = 1; i <= 4; i++)
        for (int j = v[i]; j <= n; j++)
        {
            f[j] += f[j - v[i]];
        }
    cout << f[n] << endl;
    return 0;
}