#include <bits/stdc++.h>
using namespace std;
long long ans;
int n;
int a[100010], t[100010];
void msort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) >> 1;
    msort(l, mid);
    msort(mid + 1, r);
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (a[i] <= a[j])
        {
            t[k] = a[i];
            i++;
            k++;
        }
        else
        {
            ans += mid - i + 1;
            t[k] = a[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        t[k] = a[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        t[k] = a[j];
        j++;
        k++;
    }
    for (int i = l; i <= r; i++)
        a[i] = t[i];
}
int main()
{
    ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    msort(1, n);
    cout << ans << endl;
    return 0;
}