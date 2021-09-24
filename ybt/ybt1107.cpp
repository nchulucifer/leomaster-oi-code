#include <bits/stdc++.h>
using namespace std;
int l, m, a, b, ans;
int tree[10010];
int main()
{
    cin >> l >> m;
    for (int i = 0; i <= l; i++)
        tree[i] = 1;
    while (m--)
    {
        cin >> a >> b;
        for (int i = a; i <= b; i++)
            tree[i] = 0;
    }
    ans = 0;
    for (int i = 0; i <= l; i++)
        if (tree[i] == 1)
            ans++;
    cout << ans << endl;
    return 0;
}