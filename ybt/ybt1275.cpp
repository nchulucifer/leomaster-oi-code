#include <bits/stdc++.h>
using namespace std;
int n, k;
int w[15], num[15][15];
int f[15][15];
string s;
int main()
{
    cin >> n >> k;
    cin >> s;
    for (int i = 0; i < n; i++)
        w[i + 1] = s[i] - '0';
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++)
            num[i][j] = num[i][j - 1] * 10 + w[j];
    for (int i = 1; i <= n; i++)
        f[i][0] = num[1][i];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= k; j++)
            for (int h = 1; h < i; h++)
                f[i][j] = max(f[i][j], f[h][j - 1] * num[h + 1][i]);
    cout << f[n][k] << endl;
    return 0;
}