#include <bits/stdc++.h>
using namespace std;
int n, m, t, a;
int main()
{
    cin >> n >> m;

    while (n--)
    {
        cin >> t;
        if (t == m)
            a++;
    }
    cout << a << endl;
    return 0;
}