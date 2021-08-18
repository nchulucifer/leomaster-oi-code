#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans;
    double time = 0, x, y, p;
    cin >> n;
    while (n--)
    {
        cin >> x >> y >> p;
        time += sqrt(x * x + y * y) / 25 + p * 1.5;
    }
    ans = ceil(time);
    cout << ans << endl;
    return 0;
}