#include <bits/stdc++.h>
using namespace std;
int n, s, t;
string str;
int f[105][105];
int main()
{
    cin >> n;
    cin >> s;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> str;
            if (str == "-")
                f[i][j] = 1e9;
            else
                f[i][j] = atoi(str.c_str());
        }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
    for (int i = 1; i <= n; i++)
        if (s != i)
            printf("(%d -> %d) = %d\n", s, i, f[s][i]);
    return 0;
}