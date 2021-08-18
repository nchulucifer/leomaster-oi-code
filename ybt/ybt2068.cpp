#include <bits/stdc++.h>
using namespace std;
int n, m, j, t;
int main()
{
    cin >> n >> m;
    t = (m - 2 * n) / 2;
    j = n - t;
    cout << j << " " << t << endl;
    return 0;
}