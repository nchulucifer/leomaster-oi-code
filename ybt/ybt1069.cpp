#include <bits/stdc++.h>
using namespace std;
int n, m, t, a;
int main()
{
    cin >> a >> n;
    t = 1;
    for (int i = 1; i <= n; i++)
        t = t * a;
    cout << t << endl;
    return 0;
}