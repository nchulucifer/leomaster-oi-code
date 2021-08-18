#include <bits/stdc++.h>
using namespace std;
int n, x, y;
int main()
{
    cin >> n >> x >> y;
    n = n - ceil(1.0 * y / x);
    n = max(0, n);
    cout << n << endl;
    return 0;
}