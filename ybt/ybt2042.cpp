#include <bits/stdc++.h>
using namespace std;
int a[1010][1010];
int n, m;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] != 0)
                cout << i << " " << j << " " << a[i][j] << endl;
    return 0;
}