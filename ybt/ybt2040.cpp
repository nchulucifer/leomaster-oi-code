#include <bits/stdc++.h>
using namespace std;
bool su[10010];
int n;
int main()
{
    su[1] = 1;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (su[i] == 0)
        {
            for (int j = i * 2; j <= n; j = j + i)
                su[j] = 1;
        }
    }
    for (int i = 2; i <= n; i++)
        if (su[i] == 0)
            cout << i << endl;
    return 0;
}