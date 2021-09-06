#include <bits/stdc++.h>
using namespace std;
int n, ans;
bool fun(int k)
{
    int sum = 0;
    for (int i = 2; i <= sqrt(k); i++)
        if (k % i == 0)
            return false;
    return true;
}
int main()
{
    ans = 0;
    cin >> n;
    for (int i = 2; i <= n; i++)
        if (fun(i))
            ans++;
    cout << ans << endl;
    return 0;
}