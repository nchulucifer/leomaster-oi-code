#include <bits/stdc++.h>
using namespace std;
int n;
long long ans;
int main()
{
    cin >> n;
    ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    cout << ans << endl;
    return 0;
}