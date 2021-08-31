#include <bits/stdc++.h>
using namespace std;
string a, b;
int lena, lenb;
int f[1005][1005];
int main()
{
    cin >> a >> b;
    lena = a.length();
    lenb = b.length();
    for (int i = 1; i <= lena; i++)
        for (int j = 1; j <= lenb; j++)
        {
            if (a[i - 1] == b[j - 1])
                f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
            else
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
        }
    cout << f[lena][lenb] << endl;
    return 0;
}