#include <bits/stdc++.h>
using namespace std;
int a[1010][1010];
int main()
{
    int m;
    int k = 1, half = 1;
    cin >> m;
    int n = 1 << m;
    a[1][1] = 1;
    while (k <= m)
    {
        for (int i = 1; i <= half; i++)
            for (int j = 1; j <= half; j++)
                a[i][j + half] = a[i][j] + half;

        for (int i = 1; i <= half; i++)
            for (int j = 1; j <= half; j++)
            {
                a[i + half][j] = a[i][j + half];
                a[i + half][j + half] = a[i][j];
            }
        half = half * 2;
        k++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}