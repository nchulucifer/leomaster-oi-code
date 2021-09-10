#include <bits/stdc++.h>
using namespace std;
int n, ans;
int main()
{
    int n;
    cin >> n;
    if (n < 0)
        cout << "-";
    n = abs(n);
    ans = 0;
    while (n != 0)
    {
        int k = n % 10;
        ans = ans * 10 + k;
        n = n / 10;
    }
    cout << ans << endl;
    return 0;
}