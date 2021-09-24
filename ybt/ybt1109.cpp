#include <bits/stdc++.h>
using namespace std;
bool a[5005], first;
int n, m, ans;
int main()
{
    cin >> n >> m;
    for (int i = 2; i <= m; i++)
        for (int j = i; j <= n; j = j + i)
            a[j] = !a[j];
    for (int i = 1; i <= n; i++)
        if (!a[i])
        {
            if (first == 0)
            {
                cout << i;
                first = 1;
            }
            else
                cout << "," << i;
        }
    return 0;
}