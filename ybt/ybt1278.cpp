#include <bits/stdc++.h>
using namespace std;
int v[505], a[505], b[505];
int n, k;
bool check(int sum)
{
    int s = 0, cnt = 1;
    b[cnt] = n;
    for (int i = n; i; i--)
    {
        if (s + v[i] <= sum)
            s = s + v[i];
        else
        {
            a[cnt] = i + 1;
            cnt++;
            b[cnt] = i;
            s = v[i];
        }
    }
    a[cnt] = 1;
    return cnt <= k;
}
int main()
{
    cin >> n >> k;
    int l = 0, r = 1e9;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        l = max(l, v[i]);
    }
    while (l < r)
    {
        int mid = (l + r) >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid + 1;
    }
    check(r);
    for (int i = k; i >= 1; i--)
        cout << a[i] << " " << b[i] << endl;
    return 0;
}