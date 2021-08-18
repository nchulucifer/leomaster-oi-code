#include <bits/stdc++.h>
using namespace std;
int a[15][15];
int x, y;
int main()
{
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            cin >> a[i][j];
    cin >> x >> y;
    for (int i = 1; i <= 5; i++)
        swap(a[x][i], a[y][i]);
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}