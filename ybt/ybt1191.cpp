#include <bits/stdc++.h>
using namespace std;
int gox[] = {-1, 1, 0, 0};
int goy[] = {0, 0, -1, 1};
char a[105][105];
bool b[105][105];
int n, m, ans;
int main()
{
    ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    cin >> m;
    for (int k = 2; k <= m; k++)
    {
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j] == '@')
                    for (int t = 0; t < 4; t++)
                    {
                        int xx = i + gox[t];
                        int yy = j + goy[t];
                        if (xx >= 1 && xx <= n && yy >= 1 && yy <= n && b[xx][yy] == 0)
                        {
                            if (a[xx][yy] == '.')
                                b[xx][yy] = 1;
                        }
                    }
            }
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (b[i][j]==1)
                    a[i][j] = '@';
    }
    ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i][j] == '@')
                ans++;
    cout<<ans<<endl;
    return 0;
}