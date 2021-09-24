#include <bits/stdc++.h>
using namespace std;
int a[10][10], m, k, t;
int main()
{
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++)
            cin >> a[i][j];
    for (int i = 1; i <= 5; i++)
    {
        m = a[i][1];
        k = 1;
        for (int j = 2; j <= 5; j++)
            if (a[i][j] > m)
            {
                m = a[i][j];
                k = j;
            }
        t = i;
        for (int j = 1; j <= 5; j++)
            if (a[j][k] < m)
            {
                t = j;
            }
        if (i == t)
        {
            cout << t << " " << k << " " << a[t][k] << endl;
            return 0;
        }
    }
    cout << "not found" << endl;
    return 0;
}