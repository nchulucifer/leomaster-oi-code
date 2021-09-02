#include <bits/stdc++.h>
using namespace std;
int n, m, k;
int f[2005][2005];
char a[2005], b[2005];
int la, lb;
int main()
{
    cin >> a + 1;
    cin >> b + 1;
    la = strlen(a + 1);
    lb = strlen(b + 1);
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= la; i++)
        f[i][0] = i;
    for (int i = 1; i <= lb; i++)
        f[0][i] = i;
    for (int i = 1; i <= la; i++)
        for (int j = 1; j <= lb; j++)
        {
            f[i][j] = min(f[i - 1][j] + 1, f[i][j - 1] + 1);
            if (a[i] == b[j])
                f[i][j] = min(f[i][j], f[i - 1][j - 1]);
            else
                f[i][j] = min(f[i][j], f[i - 1][j - 1] + 1);
        }
    cout << f[la][lb] << endl;
    return 0;
}