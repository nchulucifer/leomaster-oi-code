#include <bits/stdc++.h>
using namespace std;
int a[25][25];
int n;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || i == j)
                a[i][j] = 1;
            else
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a[i][j];
            if (i == j)
                cout << endl;
            else
                cout << " ";
        }
    }
    return 0;
}