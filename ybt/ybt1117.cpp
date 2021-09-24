#include <bits/stdc++.h>
using namespace std;
int n, t;
bool b[5005];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t;
        if (!b[t])
        {
            cout << t << ' ';
            b[t] = 1;
        }
    }
    return 0;
}