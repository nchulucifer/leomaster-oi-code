#include <bits/stdc++.h>
using namespace std;
int a, b, n, sum, ans;
int main()
{
    cin >> n;
    sum = ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        if (a >= 90 && a <= 140 && b >= 60 && b <= 90)
        {
            sum++;
            if (sum > ans)
                ans = sum;
        }
        else
            sum = 0;
    }
    cout << ans << endl;
    return 0;
}